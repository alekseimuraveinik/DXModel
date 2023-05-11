
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAbstractOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder || defined(INCLUDE_DXMARKETAbstractOrder))
#define DXMARKETAbstractOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderData 1
#define INCLUDE_DXMARKETOrderData 1
#include "DXMARKETOrderData.h"

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseValueErrorBuilder 1
#define INCLUDE_DXMARKETErrorBuilder 1
#include "DXMARKETErrorBuilder.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETOrderEntryValue;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeEnum;
@class DXOrderEntryTypeTO;
@class DXOrderValidationDetailsTO;
@class DXOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@class JavaUtilArrayList;
@protocol DXDecimalFormatter;
@protocol DXMARKETOrderEntryValueParamsResolver;
@protocol DXMARKETOrderErrorStringProvider;

@interface DXMARKETAbstractOrder : NSObject < DXMARKETOrderData, DXMARKETErrorBuilder >

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)model
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds;

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds
                         withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)buildErrorWithMinIncrementWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                       withNSString:(NSString *)increment;

- (NSString *)buildErrorWithMinIncrementWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                       withNSString:(NSString *)increment
                               withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)buildHintWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                withNSString:(NSString *)bounds;

- (NSString *)getMinIncrement;

- (DXOrderEntryTypeTO *)getOrderType;

- (NSString *)getQuantityString;

- (DXMARKETValidationInfo *)getQuantityValidationInfo;

- (jboolean)isBuy;

- (jboolean)isQuantityEditable;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (jboolean)setQuantityWithNSString:(NSString *)quantityStr;

- (void)stepQuantityWithBoolean:(jboolean)forward;

- (void)stopValuesAutoUpdate;

- (void)updateWithWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (jboolean)validate;

#pragma mark Protected

- (jboolean)checkIfCorrectWithDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)typeTO;

- (NSString *)composeQuantityRegexWithInt:(jint)precision;

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (jint)getAccountCurrencyPrecisionWithInt:(jint)defaultPrecision;

- (id<DXDecimalFormatter>)getDecimalFormatter;

- (jlong)getDecimalQuantity;

- (jint)getInstrumentPrecision;

- (DXMARKETOrderEditorModel *)getModel;

- (id<DXMARKETOrderEntryValueParamsResolver>)getParamsResolver;

- (jint)getPipSize;

- (JavaUtilArrayList *)getPrimaryValuesList;

- (DXMARKETOrderEntryValue *)getQuantityValue;

- (jlong)guardLongValueWithLong:(jlong)decimalPrice
                        withInt:(jint)precision;

- (NSString *)guardValueWithLong:(jlong)decimalPrice
                         withInt:(jint)precision;

- (NSString *)guardValueWithZeroWithLong:(jlong)decimalPrice
                                 withInt:(jint)precision;

- (void)onQuantityChanged;

- (void)refreshPrimaryValues;

- (jint)side;

+ (DXOrderEntryTypeTO *)typeTOFromEnumWithDXOrderEntryTypeEnum:(DXOrderEntryTypeEnum *)typeEnum;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (void)updateInstrumentDataWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (jboolean)validateImpl;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAbstractOrder)

FOUNDATION_EXPORT void DXMARKETAbstractOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETAbstractOrder *self, DXMARKETOrderEditorModel *model, DXOrderEntryTypeTO *orderType);

FOUNDATION_EXPORT DXOrderEntryTypeTO *DXMARKETAbstractOrder_typeTOFromEnumWithDXOrderEntryTypeEnum_(DXOrderEntryTypeEnum *typeEnum);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAbstractOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder DXMARKETAbstractOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAbstractOrder")
