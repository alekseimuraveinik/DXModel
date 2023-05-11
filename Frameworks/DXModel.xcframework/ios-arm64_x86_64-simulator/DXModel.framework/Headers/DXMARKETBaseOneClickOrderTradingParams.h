
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseOneClickOrderTradingParams_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams || defined(INCLUDE_DXMARKETBaseOneClickOrderTradingParams))
#define DXMARKETBaseOneClickOrderTradingParams_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOneclickOneClickOrderTradingParams 1
#define INCLUDE_DXMARKETOneClickOrderTradingParams 1
#include "DXMARKETOneClickOrderTradingParams.h"

@class DXOrderEntryTypeEnum;
@class DXOrderEntryTypeTO;
@protocol DXMARKETOrderDataFactory;
@protocol DXMARKETOrderErrorStringProvider;
@protocol JavaUtilFunctionSupplier;
@protocol PSActionPerformer;
@protocol PSFeed;

@interface DXMARKETBaseOneClickOrderTradingParams : NSObject < DXMARKETOneClickOrderTradingParams >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString * __nonnull)symbol
                  withDXOrderEntryTypeEnum:(DXOrderEntryTypeEnum * __nonnull)orderEntryType
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider> __nonnull)hintStringProvider
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider> __nonnull)errorStringProvider
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)orderEditorFeed
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)symbolDetailsFeed
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)issueOrderPerformer
                               withBoolean:(jboolean)optionOneClickEnabled;

- (instancetype __nonnull)initWithNSString:(NSString * __nonnull)symbol
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)orderEditorFeed
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)symbolDetailsFeed
              withJavaUtilFunctionSupplier:(id<JavaUtilFunctionSupplier> __nonnull)issueOrderPerformer
              withDXMARKETOrderDataFactory:(id<DXMARKETOrderDataFactory> __nonnull)orderDataFactory
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider> __nonnull)hintStringProvider
      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider> __nonnull)errorStringProvider
                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO * __nonnull)orderEntryType
                               withBoolean:(jboolean)optionOneClickEnabled;

- (id<DXMARKETOrderErrorStringProvider> __nonnull)errorStringProvider;

- (id<DXMARKETOrderErrorStringProvider> __nonnull)hintStringProvider;

- (id<PSActionPerformer> __nonnull)issueOrderPerformer;

- (jboolean)optionOneClickEnabled;

- (id<DXMARKETOrderDataFactory> __nonnull)orderDataFactory;

- (id<PSFeed> __nonnull)orderEditorFeed;

- (DXOrderEntryTypeTO * __nonnull)orderEntryType;

- (NSString * __nonnull)symbol;

- (id<PSFeed> __nonnull)symbolDetailsFeed;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseOneClickOrderTradingParams)

FOUNDATION_EXPORT void DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withDXOrderEntryTypeEnum_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withBoolean_(DXMARKETBaseOneClickOrderTradingParams *self, NSString *symbol, DXOrderEntryTypeEnum *orderEntryType, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, jboolean optionOneClickEnabled);

FOUNDATION_EXPORT DXMARKETBaseOneClickOrderTradingParams *new_DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withDXOrderEntryTypeEnum_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withBoolean_(NSString *symbol, DXOrderEntryTypeEnum *orderEntryType, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, jboolean optionOneClickEnabled) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseOneClickOrderTradingParams *create_DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withDXOrderEntryTypeEnum_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withBoolean_(NSString *symbol, DXOrderEntryTypeEnum *orderEntryType, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, jboolean optionOneClickEnabled);

FOUNDATION_EXPORT void DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withDXOrderEntryTypeTO_withBoolean_(DXMARKETBaseOneClickOrderTradingParams *self, NSString *symbol, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, id<DXMARKETOrderDataFactory> orderDataFactory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, DXOrderEntryTypeTO *orderEntryType, jboolean optionOneClickEnabled);

FOUNDATION_EXPORT DXMARKETBaseOneClickOrderTradingParams *new_DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withDXOrderEntryTypeTO_withBoolean_(NSString *symbol, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, id<DXMARKETOrderDataFactory> orderDataFactory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, DXOrderEntryTypeTO *orderEntryType, jboolean optionOneClickEnabled) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseOneClickOrderTradingParams *create_DXMARKETBaseOneClickOrderTradingParams_initWithNSString_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withJavaUtilFunctionSupplier_withDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_withDXOrderEntryTypeTO_withBoolean_(NSString *symbol, id<JavaUtilFunctionSupplier> orderEditorFeed, id<JavaUtilFunctionSupplier> symbolDetailsFeed, id<JavaUtilFunctionSupplier> issueOrderPerformer, id<DXMARKETOrderDataFactory> orderDataFactory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider, DXOrderEntryTypeTO *orderEntryType, jboolean optionOneClickEnabled);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseOneClickOrderTradingParams)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams DXMARKETBaseOneClickOrderTradingParams;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOneclickBaseOneClickOrderTradingParams")
