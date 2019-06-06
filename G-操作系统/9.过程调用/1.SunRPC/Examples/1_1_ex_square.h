/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _1_1_EX_SQUARE_H_RPCGEN
#define _1_1_EX_SQUARE_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


struct square_in {
	long arg1;
};
typedef struct square_in square_in;
#ifdef __cplusplus
extern "C" bool_t xdr_square_in(XDR *, square_in*);
#elif __STDC__
extern  bool_t xdr_square_in(XDR *, square_in*);
#else /* Old Style C */
bool_t xdr_square_in();
#endif /* Old Style C */


struct square_out {
	long res1;
};
typedef struct square_out square_out;
#ifdef __cplusplus
extern "C" bool_t xdr_square_out(XDR *, square_out*);
#elif __STDC__
extern  bool_t xdr_square_out(XDR *, square_out*);
#else /* Old Style C */
bool_t xdr_square_out();
#endif /* Old Style C */


#define SQUARE_PROG ((rpc_uint)0x31230000)
#define SQUARE_VERS ((rpc_uint)1)

#ifdef __cplusplus
#define SQUAREPROC ((rpc_uint)1)
extern "C" square_out * squareproc_1(square_in *, CLIENT *);
extern "C" square_out * squareproc_1_svc(square_in *, struct svc_req *);

#elif __STDC__
#define SQUAREPROC ((rpc_uint)1)
extern  square_out * squareproc_1(square_in *, CLIENT *);
extern  square_out * squareproc_1_svc(square_in *, struct svc_req *);

#else /* Old Style C */
#define SQUAREPROC ((rpc_uint)1)
extern  square_out * squareproc_1();
extern  square_out * squareproc_1_svc();
#endif /* Old Style C */

#endif /* !_1_1_EX_SQUARE_H_RPCGEN */
