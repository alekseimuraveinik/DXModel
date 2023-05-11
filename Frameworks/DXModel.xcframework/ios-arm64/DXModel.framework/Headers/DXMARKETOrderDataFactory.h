
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderDataFactory")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderDataFactory
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderDataFactory 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderDataFactory 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderDataFactory

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETOrderDataFactory_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderDataFactory || defined(INCLUDE_DXMARKETOrderDataFactory))
#define DXMARKETOrderDataFactory_

@class DXMARKETAbstractOrder;
@class DXMARKETOrderEditorModel;
@class DXOrderEntryTypeTO;
@protocol DXDecimalFormatter;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderEditorListener;
@protocol DXMARKETOrderEditorParameters;
@protocol DXMARKETOrderEntryValueParamsResolver;
@protocol DXMARKETValueParser;

@protocol DXMARKETOrderDataFactory < JavaObject >

- (id<DXMARKETOrderEditorParameters>)newOrderEditorParametersHolderWithNSString:(NSString *)symbol
                                                   withDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model OBJC_METHOD_FAMILY_NONE;

- (id<DXMARKETOrderEditorListener>)getEmptyOrderEditorListener;

- (id<DXMARKETOrderData>)newOrderFromTypeWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                               withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType
                                                withDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder OBJC_METHOD_FAMILY_NONE;

- (jboolean)isShowOffsetAsPips;

- (id<DXMARKETValueParser>)getValueParser;

- (jint)getViolatedBoundsMode;

- (id<DXMARKETOrderEntryValueParamsResolver>)getParameterResolverWithDXMARKETAbstractOrder:(DXMARKETAbstractOrder *)order;

- (void)onOrderEditorParametersChangedWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model;

- (NSString *)composePriceRegexWithInt:(jint)precision;

- (id<DXDecimalFormatter>)getDecimalFormatter;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETOrderDataFactory)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETOrderDataFactory)

#define ComDevexpertsDxmarketClientModelOrderOrderDataFactory DXMARKETOrderDataFactory

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderOrderDataFactory")
