#ifndef TPETRACORE_ETIHELPERMACROS_H
#define TPETRACORE_ETIHELPERMACROS_H

#include <Tpetra_ConfigDefs.hpp>

/* Tpetra provides official support for the following nodes */
#include <Kokkos_DefaultNode.hpp>

/* Tpetra provides official support for dd_real and qd_real */
#if defined(HAVE_TPETRA_QD)
#include <qd/qd_real.h>
#endif

#define TPETRA_INSTANTIATE_VECTOR(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_SLGN(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_PLGN(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )\
	INSTMACRO( int , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_LGN(INSTMACRO)\
	INSTMACRO( int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_SLG(INSTMACRO)\
	INSTMACRO( double , int , int )


#define TPETRA_INSTANTIATE_LG(INSTMACRO)\
	INSTMACRO( int , int )


#define TPETRA_INSTANTIATE_SL(INSTMACRO)\
	INSTMACRO( double , int )


#define TPETRA_INSTANTIATE_S(INSTMACRO)\
	INSTMACRO( double )


#define TPETRA_INSTANTIATE_N(INSTMACRO)\
	INSTMACRO( Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_TSLGN(INSTMACRO)


#define TPETRA_INSTANTIATE_TSLG(INSTMACRO)


#define TPETRA_INSTANTIATE_CONVERT(INSTMACRO)


#define TPETRA_INSTANTIATE_CONVERT_SSL(INSTMACRO)


#define TPETRA_INSTANTIATE_SLGN_NOGPU(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_LGN_NOGPU(INSTMACRO)\
	INSTMACRO( int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_SLG_NOGPU(INSTMACRO)\
	INSTMACRO( double , int , int )


#define TPETRA_INSTANTIATE_LG_NOGPU(INSTMACRO)\
	INSTMACRO( int , int )


#define TPETRA_INSTANTIATE_SL_NOGPU(INSTMACRO)\
	INSTMACRO( double , int )


#define TPETRA_INSTANTIATE_S_NOGPU(INSTMACRO)\
	INSTMACRO( double )


#define TPETRA_INSTANTIATE_N_NOGPU(INSTMACRO)\
	INSTMACRO( Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_TSLGN_NOGPU(INSTMACRO)


#define TPETRA_INSTANTIATE_TSLG_NOGPU(INSTMACRO)


#define TPETRA_INSTANTIATE_CONVERT_NOGPU(INSTMACRO)


#define TPETRA_INSTANTIATE_CONVERT_NOGPU_SSL(INSTMACRO)


#define TPETRA_INSTANTIATE_TESTMV(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_TESTMV_NOGPU(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_DOUBLE_INT_INT_N(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_SLGN_NO_ORDINAL_SCALAR(INSTMACRO)\
	INSTMACRO( double , int , int , Kokkos_Compat_KokkosSerialWrapperNode )


#define TPETRA_INSTANTIATE_SLG_NO_ORDINAL_SCALAR(INSTMACRO)\
	INSTMACRO( double , int , int )


#define TPETRA_INSTANTIATE_SL_NO_ORDINAL_SCALAR(INSTMACRO)\
	INSTMACRO( double , int )


#define TPETRA_INSTANTIATE_S_NO_ORDINAL_SCALAR(INSTMACRO)\
	INSTMACRO( double )


#define TPETRA_ETI_MANGLING_TYPEDEFS()  \
	typedef Kokkos::Compat::KokkosSerialWrapperNode Kokkos_Compat_KokkosSerialWrapperNode;

#endif // TPETRACORE_ETIHELPERMACROS_H
