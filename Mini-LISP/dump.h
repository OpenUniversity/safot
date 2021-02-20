#ifndef __EXPRESSION_H_
#define __EXPRESSION_H_
#include <iostream>
extern bool dumping;


#define FE_1(W,_1)              
#define FE_2(W,_1,_2)                     W(_2)
#define FE_3(W,_1,_2,_3)                  W(_2)W(_3)
#define FE_4(W,_1,_2,_3,_4)               W(_2)W(_3)W(_4)
#define FE_5(W,_1,_2,_3,_4,_5)            W(_2)W(_3)W(_4)W(_5)
#define FE_6(W,_1,_2,_3,_4,_5,_6)         W(_2)W(_3)W(_4)W(_5)W(_6)
#define FE_7(W,_1,_2,_3,_4,_5,_6,_7)      W(_2)W(_3)W(_4)W(_5)W(_6)W(_7)

#define GET_MACRO(_0,_1,_2,_3,_4,_5,_6,_7,NAME,...) NAME
#define ITERATE(...) \
  GET_MACRO(_0,__VA_ARGS__,FE_7,FE_6, FE_5,FE_4,FE_3,FE_2,FE_1,FE_0)\
  (__EXPRESSION,__VA_ARGS__)

#define LOCATE  std::cerr\
  <<__FILE__\
  <<"("<<__LINE__<<")/" \
  <<__FUNCTION__ << "(): "

#define __EXPRESSION(X) <<#X<<"="<<X<<"; "
#define __VALUE(X) <<X<<"; "
#define __SEP <<"; "


#define BEFORE  (dumping?0: (     \
                  dumping = true, \
                  (LOCATE

#define AFTER     <<std::endl       \
                  ),                 \
                  dumping = false)  \
                )


#define D(...) BEFORE ITERATE(__VA_ARGS__) AFTER
#define M(...) BEFORE ITERATE(__VA_ARGS__) AFTER
#define _M(...) BEFORE ITERATE(__VA_ARGS__) AFTER
#endif /* __EXPRESSION_H_ */
