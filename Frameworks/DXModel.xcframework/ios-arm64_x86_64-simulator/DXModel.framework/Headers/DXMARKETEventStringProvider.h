
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETEventStringProvider_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider || defined(INCLUDE_DXMARKETEventStringProvider))
#define DXMARKETEventStringProvider_

@class DXEventTypeEnum;
@class DXOrderTO;
@class PSErrorTO;
@protocol JavaLangCharSequence;

@protocol DXMARKETEventStringProvider < JavaObject >

- (id<JavaLangCharSequence>)getEventTypeWithDXEventTypeEnum:(DXEventTypeEnum *)type;

- (id<JavaLangCharSequence>)getOrderBuy;

- (id<JavaLangCharSequence>)getOrderSell;

- (id<JavaLangCharSequence>)getOrderTypeWithDXOrderTO:(DXOrderTO *)order;

- (id<JavaLangCharSequence>)getRejectReasonWithPSErrorTO:(PSErrorTO *)errorTO;

- (id<JavaLangCharSequence>)getCurrencyWithInt:(jint)accountId;

- (id<JavaLangCharSequence>)getClosePositionPrefix;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETEventStringProvider)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETEventStringProvider)

#define ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider DXMARKETEventStringProvider

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelEventBuilderEventStringProvider")
