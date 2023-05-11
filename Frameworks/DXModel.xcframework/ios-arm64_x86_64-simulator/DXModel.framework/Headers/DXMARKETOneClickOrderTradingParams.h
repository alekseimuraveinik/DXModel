
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOneClickOrderTradingParams_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams || defined(INCLUDE_DXMARKETOneClickOrderTradingParams))
#define DXMARKETOneClickOrderTradingParams_

@class DXOrderEntryTypeTO;
@protocol DXMARKETOrderDataFactory;
@protocol DXMARKETOrderErrorStringProvider;
@protocol PSActionPerformer;
@protocol PSFeed;

@protocol DXMARKETOneClickOrderTradingParams < JavaObject >

- (jboolean)optionOneClickEnabled;

- (NSString * __nonnull)symbol;

- (DXOrderEntryTypeTO * __nonnull)orderEntryType;

- (id<PSFeed> __nonnull)orderEditorFeed;

- (id<PSFeed> __nonnull)symbolDetailsFeed;

- (id<PSActionPerformer> __nonnull)issueOrderPerformer;

- (id<DXMARKETOrderErrorStringProvider> __nonnull)hintStringProvider;

- (id<DXMARKETOrderErrorStringProvider> __nonnull)errorStringProvider;

- (id<DXMARKETOrderDataFactory> __nonnull)orderDataFactory;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOneClickOrderTradingParams)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOneClickOrderTradingParams)

#define ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams DXMARKETOneClickOrderTradingParams

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams")
