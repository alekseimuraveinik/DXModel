
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOneClickOrderTradingModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel || defined(INCLUDE_DXMARKETOneClickOrderTradingModel))
#define DXMARKETOneClickOrderTradingModel_

@class PSErrorTO;
@protocol DXMARKETOneClickOrderTradingModel_Listener;

@protocol DXMARKETOneClickOrderTradingModel < JavaObject >

- (void)updateQuantityWithNSString:(NSString * __nonnull)quantity;

- (void)issueOrderWithBoolean:(jboolean)isBuy;

- (void)addListenerWithDXMARKETOneClickOrderTradingModel_Listener:(id<DXMARKETOneClickOrderTradingModel_Listener> __nonnull)listener;

- (void)removeListenerWithDXMARKETOneClickOrderTradingModel_Listener:(id<DXMARKETOneClickOrderTradingModel_Listener> __nonnull)listener;

- (void)close;

@end

@interface DXMARKETOneClickOrderTradingModel : NSObject
@property (readonly, class, strong) PSErrorTO *ORDER_DATA_INVALID NS_SWIFT_NAME(ORDER_DATA_INVALID);
@property (readonly, class, strong) PSErrorTO *ISSUE_ORDER_REQUEST_LOST NS_SWIFT_NAME(ISSUE_ORDER_REQUEST_LOST);

+ (PSErrorTO *)ORDER_DATA_INVALID;

+ (PSErrorTO *)ISSUE_ORDER_REQUEST_LOST;

@end

J2OBJC_STATIC_INIT(DXMARKETOneClickOrderTradingModel)

inline PSErrorTO *DXMARKETOneClickOrderTradingModel_get_ORDER_DATA_INVALID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTO *DXMARKETOneClickOrderTradingModel_ORDER_DATA_INVALID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETOneClickOrderTradingModel, ORDER_DATA_INVALID, PSErrorTO *)

inline PSErrorTO *DXMARKETOneClickOrderTradingModel_get_ISSUE_ORDER_REQUEST_LOST(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT PSErrorTO *DXMARKETOneClickOrderTradingModel_ISSUE_ORDER_REQUEST_LOST;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMARKETOneClickOrderTradingModel, ISSUE_ORDER_REQUEST_LOST, PSErrorTO *)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOneClickOrderTradingModel)

#define ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel DXMARKETOneClickOrderTradingModel

#endif

#if !defined (DXMARKETOneClickOrderTradingModel_Listener_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel || defined(INCLUDE_DXMARKETOneClickOrderTradingModel_Listener))
#define DXMARKETOneClickOrderTradingModel_Listener_

@class DXOrderIssueDetailsTO;
@class DXQuoteTO;
@class PSErrorTO;

@protocol DXMARKETOneClickOrderTradingModel_Listener < JavaObject >

- (void)onValidationErrorWithPSErrorTO:(PSErrorTO * __nonnull)error;

- (void)onQuantityErrorWithPSErrorTO:(PSErrorTO * __nonnull)error;

- (void)onDefaultValueReceivedWithNSString:(NSString * __nonnull)quantity;

- (void)onMinIncrementChangedWithLong:(jlong)minIncrement;

- (void)onIssueSuccessWithDXOrderIssueDetailsTO:(DXOrderIssueDetailsTO * __nonnull)issueDetails;

- (void)onIssueProcess;

- (void)onQuoteUpdatedWithDXQuoteTO:(DXQuoteTO * __nonnull)quote;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOneClickOrderTradingModel_Listener)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOneClickOrderTradingModel_Listener)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingModel")
