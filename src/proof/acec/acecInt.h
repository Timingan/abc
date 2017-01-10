/**CFile****************************************************************

  FileName    [acecInt.h]

  SystemName  [ABC: Logic synthesis and verification system.]

  PackageName [CEC for arithmetic circuits.]

  Synopsis    [Internal declarations.]

  Author      [Alan Mishchenko]
  
  Affiliation [UC Berkeley]

  Date        [Ver. 1.0. Started - June 20, 2005.]

  Revision    [$Id: acecInt.h,v 1.00 2005/06/20 00:00:00 alanmi Exp $]

***********************************************************************/

#ifndef ABC__proof__acec__acec__int_h
#define ABC__proof__acec__acec__int_h


////////////////////////////////////////////////////////////////////////
///                          INCLUDES                                ///
////////////////////////////////////////////////////////////////////////

#include "aig/gia/gia.h"
#include "acec.h"

////////////////////////////////////////////////////////////////////////
///                         PARAMETERS                               ///
////////////////////////////////////////////////////////////////////////


ABC_NAMESPACE_HEADER_START
 

typedef struct Acec_Box_t_ Acec_Box_t;
struct Acec_Box_t_
{
    Gia_Man_t *    pGia;      // AIG manager
    Vec_Wec_t *    vLeafs;    // leaf literals by rank
    Vec_Wec_t *    vRoots;    // root literals by rank
    Vec_Wec_t *    vLeafLits; // leaf literals by rank
    Vec_Wec_t *    vRootLits; // root literals by rank
    Vec_Wec_t *    vShared;   // shared leaves
    Vec_Wec_t *    vUnique;   // unique leaves
};

////////////////////////////////////////////////////////////////////////
///                         BASIC TYPES                              ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                      MACRO DEFINITIONS                           ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                             ITERATORS                            ///
////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
///                    FUNCTION DECLARATIONS                         ///
////////////////////////////////////////////////////////////////////////

/*=== acecCo.c ========================================================*/
extern Vec_Int_t *   Gia_PolynCoreOrder( Gia_Man_t * pGia, Vec_Int_t * vAdds, Vec_Int_t * vAddCos, Vec_Int_t ** pvIns, Vec_Int_t ** pvOuts );
extern Vec_Wec_t *   Gia_PolynCoreOrderArray( Gia_Man_t * pGia, Vec_Int_t * vAdds, Vec_Int_t * vRootBoxes );
/*=== acecTree.c ========================================================*/
extern Acec_Box_t *  Acec_DeriveBox( Gia_Man_t * p );
/*=== acecUtil.c ========================================================*/
extern void          Gia_PolynAnalyzeXors( Gia_Man_t * pGia, int fVerbose );
extern Vec_Int_t *   Gia_PolynCollectLastXor( Gia_Man_t * pGia, int fVerbose );



ABC_NAMESPACE_HEADER_END



#endif

////////////////////////////////////////////////////////////////////////
///                       END OF FILE                                ///
////////////////////////////////////////////////////////////////////////

