
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEditorModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModel || defined(INCLUDE_DXMARKETOrderEditorModel))
#define DXMARKETOrderEditorModel_

#define RESTRICT_ComDevexpertsPipestoneClientApiFeedsFeedListener 1
#define INCLUDE_PSFeedListener 1
#include "PSFeedListener.h"

#define RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorResponseVisitor 1
#define INCLUDE_DXOrderEditorResponseVisitor 1
#include "DXOrderEditorResponseVisitor.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorParametersListener 1
#define INCLUDE_DXMARKETOrderEditorParametersListener 1
#include "DXMARKETOrderEditorParametersListener.h"

@class DXOrderEditorContextTO;
@class DXOrderEntryTypeTO;
@class DXOrderIssueDetailsTO;
@class DXOrderValidationDetailsTO;
@class PSErrorTO;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderDataFactory;
@protocol DXMARKETOrderEditorListener;
@protocol DXMARKETOrderEditorParameters;
@protocol DXMARKETOrderErrorStringProvider;
@protocol PSFeed;

@interface DXMARKETOrderEditorModel : NSObject < PSFeedListener, DXOrderEditorResponseVisitor, DXMARKETOrderEditorParametersListener >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderDataFactory:(id<DXMARKETOrderDataFactory>)factory
                                withDXOrderEditorContextTO:(DXOrderEditorContextTO *)context
                                              withNSString:(NSString *)symbol
                      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)hintStringProvider
                      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)errorStringProvider;

- (jboolean)changeOrderTypeWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (jboolean)changeSymbolWithNSString:(NSString *)symbol;

- (void)close;

- (void)expirationParamChangedWithDXMARKETOrderEditorParameters:(id<DXMARKETOrderEditorParameters>)parameters;

- (DXOrderEditorContextTO *)getContext;

- (id<DXMARKETOrderErrorStringProvider>)getErrorStringProvider;

- (id<PSFeed>)getFeed;

- (id<DXMARKETOrderErrorStringProvider>)getHintStringProvider;

- (id<DXMARKETOrderData>)getOrderData;

- (id<DXMARKETOrderEditorListener>)getOrderEditorListener;

- (id<DXMARKETOrderDataFactory>)getOrderFactory;

- (id<DXMARKETOrderEditorParameters>)getParametersHolder;

- (DXOrderValidationDetailsTO *)getValidationDetails;

- (jboolean)isOrderDataValid;

- (void)onClosedWithPSFeed:(id<PSFeed>)feed
             withPSErrorTO:(PSErrorTO *)error;

- (void)onErrorResponseWithPSErrorTO:(PSErrorTO *)error;

- (void)onIssueResponseWithDXOrderIssueDetailsTO:(DXOrderIssueDetailsTO *)details;

- (void)onResetWithPSFeed:(id<PSFeed>)feed;

- (void)onSubscriptionChangedWithPSFeed:(id<PSFeed>)feed;

- (void)onUpdatedWithPSFeed:(id<PSFeed>)feed;

- (void)onValidationResponseWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (void)orderEditorParametersChangedWithDXMARKETOrderEditorParameters:(id<DXMARKETOrderEditorParameters>)parametersHolder;

- (void)setFeedWithPSFeed:(id<PSFeed>)feed;

- (void)setOrderEditorListenerWithDXMARKETOrderEditorListener:(id<DXMARKETOrderEditorListener>)orderEditorListener;

- (void)updateValidationParamsRequest;

- (void)updateValidationParamsRequestWithBoolean:(jboolean)await;

- (void)updateValidationRequest;

- (void)validate;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEditorModel)

FOUNDATION_EXPORT void DXMARKETOrderEditorModel_initWithDXMARKETOrderDataFactory_withDXOrderEditorContextTO_withNSString_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(DXMARKETOrderEditorModel *self, id<DXMARKETOrderDataFactory> factory, DXOrderEditorContextTO *context, NSString *symbol, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider);

FOUNDATION_EXPORT DXMARKETOrderEditorModel *new_DXMARKETOrderEditorModel_initWithDXMARKETOrderDataFactory_withDXOrderEditorContextTO_withNSString_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(id<DXMARKETOrderDataFactory> factory, DXOrderEditorContextTO *context, NSString *symbol, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEditorModel *create_DXMARKETOrderEditorModel_initWithDXMARKETOrderDataFactory_withDXOrderEditorContextTO_withNSString_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(id<DXMARKETOrderDataFactory> factory, DXOrderEditorContextTO *context, NSString *symbol, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEditorModel)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderOrderEditorModel DXMARKETOrderEditorModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModel")
