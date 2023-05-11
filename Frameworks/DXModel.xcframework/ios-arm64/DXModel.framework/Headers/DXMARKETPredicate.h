
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPredicate")
#ifdef RESTRICT_ComDevexpertsDxmarketClientUtilPredicate
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPredicate 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPredicate 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientUtilPredicate

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETPredicate_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPredicate || defined(INCLUDE_DXMARKETPredicate))
#define DXMARKETPredicate_

@protocol DXMARKETPredicate < JavaObject >

- (jboolean)applyWithId:(id)obj;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETPredicate)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETPredicate)

#define ComDevexpertsDxmarketClientUtilPredicate DXMARKETPredicate

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientUtilPredicate")
