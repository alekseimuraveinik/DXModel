
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseOrderFactory_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory || defined(INCLUDE_DXMARKETBaseOrderFactory))
#define DXMARKETBaseOrderFactory_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderDataFactory 1
#define INCLUDE_DXMARKETOrderDataFactory 1
#include "DXMARKETOrderDataFactory.h"

@class DXMARKETAbstractOrder;
@class DXMARKETOrderEditorModel;
@class DXMARKETProtectedOrder;
@class DXOrderEntryTypeTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderEditorListener;
@protocol DXMARKETOrderEditorParameters;
@protocol DXMARKETOrderEntryValueParamsResolver;
@protocol DXMARKETValueParser;

@interface DXMARKETBaseOrderFactory : NSObject < DXMARKETOrderDataFactory >

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)composePriceRegexWithInt:(jint)precision;

- (id<DXDecimalFormatter>)getDecimalFormatter;

- (id<DXMARKETOrderEditorListener>)getEmptyOrderEditorListener;

- (id<DXMARKETOrderEntryValueParamsResolver>)getParameterResolverWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (jint)getSimpleOrderPriceViolatedBoundsMode;

- (id<DXMARKETValueParser>)getValueParser;

- (jint)getViolatedBoundsMode;

- (jboolean)isShowOffsetAsPips;

- (id<DXMARKETOrderEditorParameters>)newOrderEditorParametersHolderWithNSString:(NSString *)symbol
                                                   withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model OBJC_METHOD_FAMILY_NONE;

- (id<DXMARKETOrderData>)newOrderFromTypeWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                               withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType
                                                withDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder OBJC_METHOD_FAMILY_NONE;

- (void)onOrderEditorParametersChangedWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

#pragma mark Protected

- (id<DXDecimalFormatter>)newDecimalFormatter OBJC_METHOD_FAMILY_NONE;

- (DXMARKETProtectedOrder *)newSimpleOrderInstanceWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                                        withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType OBJC_METHOD_FAMILY_NONE;

- (id<DXMARKETValueParser>)newValueParser OBJC_METHOD_FAMILY_NONE;

@end

J2OBJC_STATIC_INIT(DXMARKETBaseOrderFactory)

FOUNDATION_EXPORT void DXMARKETBaseOrderFactory_init(DXMARKETBaseOrderFactory *self);

FOUNDATION_EXPORT DXMARKETBaseOrderFactory *new_DXMARKETBaseOrderFactory_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseOrderFactory *create_DXMARKETBaseOrderFactory_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseOrderFactory)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory DXMARKETBaseOrderFactory;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderFactory")
