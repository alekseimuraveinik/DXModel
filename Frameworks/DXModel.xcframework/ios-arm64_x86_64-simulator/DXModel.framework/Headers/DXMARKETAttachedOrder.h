
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAttachedOrder_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder || defined(INCLUDE_DXMARKETAttachedOrder))
#define DXMARKETAttachedOrder_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderBasePriceOrder 1
#define INCLUDE_DXMARKETPriceOrder 1
#include "DXMARKETPriceOrder.h"

@class DXMARKETOrderEditorModel;
@class DXMARKETOrderEntryValue;
@class DXMARKETValidationInfo;
@class DXOrderEntryTypeTO;
@class DXOrderTemplateTO;
@class DXOrderValidationParamsTO;
@class DXPricedOrderValidationParamsTO;
@class DXSizedOrderValidationParamsTO;
@protocol DXMARKETOrderData;
@protocol DXMARKETOrderErrorStringProvider;
@protocol JavaUtilList;

@interface DXMARKETAttachedOrder : DXMARKETPriceOrder
@property (readonly, class) jint PERCENT_OF_BALANCE_PRECISION NS_SWIFT_NAME(PERCENT_OF_BALANCE_PRECISION);
@property (readonly, class) jint MASTER_PRICE NS_SWIFT_NAME(MASTER_PRICE);
@property (readonly, class) jint MASTER_OFFSET NS_SWIFT_NAME(MASTER_OFFSET);
@property (readonly, class) jint MASTER_PL NS_SWIFT_NAME(MASTER_PL);
@property (readonly, class) jint MASTER_PERCENT_OF_BALANCE NS_SWIFT_NAME(MASTER_PERCENT_OF_BALANCE);

+ (jint)PERCENT_OF_BALANCE_PRECISION;

+ (jint)MASTER_PRICE;

+ (jint)MASTER_OFFSET;

+ (jint)MASTER_PL;

+ (jint)MASTER_PERCENT_OF_BALANCE;

#pragma mark Public

- (instancetype __nonnull)initWithDXMARKETOrderEditorModel:(DXMARKETOrderEditorModel *)params
                                    withDXOrderEntryTypeTO:(DXOrderEntryTypeTO *)orderType;

- (NSString *)buildErrorWithBoundsWithDXMARKETOrderEntryValue:(DXMARKETOrderEntryValue *)value
                                                 withNSString:(NSString *)bounds
                         withDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (NSString *)getBalanceString;

- (jint)getMasterValue;

- (NSString *)getOffsetString;

- (DXMARKETValidationInfo *)getOffsetValidationInfo;

- (DXMARKETValidationInfo *)getPercentOfBalanceValidationInfo;

- (NSString *)getPlString;

- (DXMARKETValidationInfo *)getPlValidationInfo;

- (NSString *)getPriceString;

- (void)retainPreviousOrderStateWithDXMARKETOrderData:(id<DXMARKETOrderData>)prevOrder;

- (jboolean)setOffsetWithNSString:(NSString *)offsetStr;

- (jboolean)setPercentOfBalanceWithNSString:(NSString *)str;

- (jboolean)setPlWithNSString:(NSString *)marginStr;

- (void)stepOffsetWithBoolean:(jboolean)forward;

- (void)stepPercentOfBalanceWithBoolean:(jboolean)forward;

- (void)stepPlWithBoolean:(jboolean)forward;

- (DXOrderTemplateTO *)toTemplateWithBoolean:(jboolean)empty;

#pragma mark Protected

- (void)beforePriceSet;

- (void)clearPrimaryList;

- (DXPricedOrderValidationParamsTO *)extractPricedParamsWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (DXSizedOrderValidationParamsTO *)extractSizedParamsForQuantityWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)params;

- (id<JavaUtilList>)getChangingValues;

- (NSString *)offsetErrorWithDXMARKETOrderErrorStringProvider:(id<DXMARKETOrderErrorStringProvider>)stringProvider;

- (jdouble)offsetIncrement;

- (void)onBuyUpdatedWithBoolean:(jboolean)buy;

- (void)onOffsetUpdated;

- (void)onQuantityChanged;

- (void)updateImplWithDXOrderValidationParamsTO:(DXOrderValidationParamsTO *)inputParams;

- (void)updateMasterValueWithInt:(jint)masterOffset;

- (jboolean)validateImpl;

#pragma mark Package-Private

- (jlong)getDecimalOffset;

- (jlong)getDecimalParentPrice;

- (jlong)getDecimalPercentOfBalance;

- (jlong)getDecimalPl;

- (void)updateParentPriceWithLong:(jlong)parentPrice;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAttachedOrder)

inline jint DXMARKETAttachedOrder_get_PERCENT_OF_BALANCE_PRECISION(void);
#define DXMARKETAttachedOrder_PERCENT_OF_BALANCE_PRECISION 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAttachedOrder, PERCENT_OF_BALANCE_PRECISION, jint)

inline jint DXMARKETAttachedOrder_get_MASTER_PRICE(void);
#define DXMARKETAttachedOrder_MASTER_PRICE 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAttachedOrder, MASTER_PRICE, jint)

inline jint DXMARKETAttachedOrder_get_MASTER_OFFSET(void);
#define DXMARKETAttachedOrder_MASTER_OFFSET 2
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAttachedOrder, MASTER_OFFSET, jint)

inline jint DXMARKETAttachedOrder_get_MASTER_PL(void);
#define DXMARKETAttachedOrder_MASTER_PL 3
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAttachedOrder, MASTER_PL, jint)

inline jint DXMARKETAttachedOrder_get_MASTER_PERCENT_OF_BALANCE(void);
#define DXMARKETAttachedOrder_MASTER_PERCENT_OF_BALANCE 4
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAttachedOrder, MASTER_PERCENT_OF_BALANCE, jint)

FOUNDATION_EXPORT void DXMARKETAttachedOrder_initWithDXMARKETOrderEditorModel_withDXOrderEntryTypeTO_(DXMARKETAttachedOrder *self, DXMARKETOrderEditorModel *params, DXOrderEntryTypeTO *orderType);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAttachedOrder)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder DXMARKETAttachedOrder;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseAttachedOrder")
