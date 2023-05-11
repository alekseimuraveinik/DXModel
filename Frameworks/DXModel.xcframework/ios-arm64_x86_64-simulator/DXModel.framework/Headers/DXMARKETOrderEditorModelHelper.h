
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderEditorModelHelper_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper || defined(INCLUDE_DXMARKETOrderEditorModelHelper))
#define DXMARKETOrderEditorModelHelper_

@class DXAccountTO;
@class DXMARKETOrderEditorModel;
@class DXMarketTypeEnum;
@class DXOrderEntryTypeTO;
@class DXOrderResponseTO;
@class DXOrderTO;
@class DXPositionResponseTO;
@class DXPositionTO;
@class DXProtectionOrderTO;
@class DXStopTypeEnum;
@class PSListTO;
@protocol DXMARKETOrderDataFactory;
@protocol DXMARKETOrderErrorStringProvider;

@interface DXMARKETOrderEditorModelHelper : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderDataFactory:(id<DXMARKETOrderDataFactory>)factory
                      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)hintStringProvider
                      withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)errorStringProvider;

+ (DXAccountTO *)getContextAccountWithPSListTO:(PSListTO *)accountList
                  withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

+ (DXOrderTO *)getContextOrderWithDXOrderResponseTO:(DXOrderResponseTO *)response
                       withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

+ (DXPositionTO *)getContextPositionWithDXPositionResponseTO:(DXPositionResponseTO *)response
                                withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

+ (DXMarketTypeEnum *)getMarketTypeEnumWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

+ (DXOrderTO *)getOrderWithDXOrderResponseTO:(DXOrderResponseTO *)response
                                withNSString:(NSString *)id_;

+ (DXOrderTO *)getParentContextOrderWithDXOrderResponseTO:(DXOrderResponseTO *)response
                             withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

+ (DXStopTypeEnum *)getStopTypeEnumWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)type;

- (DXMARKETOrderEditorModel *)newModelForAttachOrderWithDXOrderTO:(DXOrderTO *)triggerOrder OBJC_METHOD_FAMILY_NONE;

- (DXMARKETOrderEditorModel *)newModelForAttachOrderEditWithDXOrderTO:(DXOrderTO *)order
                                              withDXProtectionOrderTO:(DXProtectionOrderTO *)attach OBJC_METHOD_FAMILY_NONE;

- (DXMARKETOrderEditorModel *)newModelForModifyPositionWithDXPositionTO:(DXPositionTO *)position OBJC_METHOD_FAMILY_NONE;

- (DXMARKETOrderEditorModel *)newModelForOrderEditWithDXOrderTO:(DXOrderTO *)order OBJC_METHOD_FAMILY_NONE;

- (DXMARKETOrderEditorModel *)newModelForOrderIssueWithNSString:(NSString *)symbol OBJC_METHOD_FAMILY_NONE;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderEditorModelHelper)

FOUNDATION_EXPORT void DXMARKETOrderEditorModelHelper_initWithDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(DXMARKETOrderEditorModelHelper *self, id<DXMARKETOrderDataFactory> factory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider);

FOUNDATION_EXPORT DXMARKETOrderEditorModelHelper *new_DXMARKETOrderEditorModelHelper_initWithDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(id<DXMARKETOrderDataFactory> factory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETOrderEditorModelHelper *create_DXMARKETOrderEditorModelHelper_initWithDXMARKETOrderDataFactory_withDXMARKETOrderErrorStringProvider_withDXMARKETOrderErrorStringProvider_(id<DXMARKETOrderDataFactory> factory, id<DXMARKETOrderErrorStringProvider> hintStringProvider, id<DXMARKETOrderErrorStringProvider> errorStringProvider);

FOUNDATION_EXPORT DXPositionTO *DXMARKETOrderEditorModelHelper_getContextPositionWithDXPositionResponseTO_withDXMARKETOrderEditorModel_(DXPositionResponseTO *response, DXMARKETOrderEditorModel *model);

FOUNDATION_EXPORT DXOrderTO *DXMARKETOrderEditorModelHelper_getContextOrderWithDXOrderResponseTO_withDXMARKETOrderEditorModel_(DXOrderResponseTO *response, DXMARKETOrderEditorModel *model);

FOUNDATION_EXPORT DXOrderTO *DXMARKETOrderEditorModelHelper_getParentContextOrderWithDXOrderResponseTO_withDXMARKETOrderEditorModel_(DXOrderResponseTO *response, DXMARKETOrderEditorModel *model);

FOUNDATION_EXPORT DXOrderTO *DXMARKETOrderEditorModelHelper_getOrderWithDXOrderResponseTO_withNSString_(DXOrderResponseTO *response, NSString *id_);

FOUNDATION_EXPORT DXAccountTO *DXMARKETOrderEditorModelHelper_getContextAccountWithPSListTO_withDXMARKETOrderEditorModel_(PSListTO *accountList, DXMARKETOrderEditorModel *model);

FOUNDATION_EXPORT DXStopTypeEnum *DXMARKETOrderEditorModelHelper_getStopTypeEnumWithDXOrderEntryTypeTO_(DXOrderEntryTypeTO *type);

FOUNDATION_EXPORT DXMarketTypeEnum *DXMARKETOrderEditorModelHelper_getMarketTypeEnumWithDXOrderEntryTypeTO_(DXOrderEntryTypeTO *type);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderEditorModelHelper)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper DXMARKETOrderEditorModelHelper;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderEditorModelHelper")
