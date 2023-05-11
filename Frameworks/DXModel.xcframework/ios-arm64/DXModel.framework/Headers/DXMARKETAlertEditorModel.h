
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModel")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertEditorModel
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModel 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModel 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertEditorModel

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertEditorModel_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModel || defined(INCLUDE_DXMARKETAlertEditorModel))
#define DXMARKETAlertEditorModel_

@class DXComparatorOperatorEnum;
@class DXMarketFieldEnum;
@class DXOperandTypeEnum;
@class JavaLangDouble;
@class JavaUtilArrayList;
@protocol DXMARKETAlertEditorModelListener;

@interface DXMARKETAlertEditorModel : NSObject
@property (readonly, class) jdouble VALUE_INCREMENT NS_SWIFT_NAME(VALUE_INCREMENT);
@property (readonly, class) jint LEFT NS_SWIFT_NAME(LEFT);
@property (readonly, class) jint RIGHT NS_SWIFT_NAME(RIGHT);

+ (jdouble)VALUE_INCREMENT;

+ (jint)LEFT;

+ (jint)RIGHT;

#pragma mark Public

- (instancetype __nonnull)init;

- (void)addListenerWithDXMARKETAlertEditorModelListener:(id<DXMARKETAlertEditorModelListener>)listener;

- (void)decrementValueWithInt:(jint)side;

- (DXComparatorOperatorEnum *)getComparatorOperator;

- (JavaUtilArrayList *)getComparatorOperators;

- (NSString *)getDescription;

- (jlong)getExpiration;

- (DXMarketFieldEnum *)getMarketFieldWithInt:(jint)side;

- (DXOperandTypeEnum *)getOperandTypeWithInt:(jint)side;

- (JavaUtilArrayList *)getOperandTypesWithInt:(jint)side;

- (JavaUtilArrayList *)getOperandValues;

- (NSString *)getSymbolWithInt:(jint)side;

- (JavaLangDouble *)getValueWithInt:(jint)side;

- (void)incrementValueWithInt:(jint)side;

- (jboolean)isMarketFieldVisibleWithInt:(jint)side;

- (jboolean)isSymbolVisibleWithInt:(jint)side;

- (jboolean)isValueVisibleWithInt:(jint)side;

- (void)removeListenerWithDXMARKETAlertEditorModelListener:(id<DXMARKETAlertEditorModelListener>)listener;

- (void)setComparatorOperatorWithDXComparatorOperatorEnum:(DXComparatorOperatorEnum *)comparatorOperator;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setExpirationWithLong:(jlong)expiration;

- (void)setMarketFieldWithInt:(jint)side
        withDXMarketFieldEnum:(DXMarketFieldEnum *)marketField;

- (void)setOperandTypeWithInt:(jint)side
        withDXOperandTypeEnum:(DXOperandTypeEnum *)operandType;

- (void)setSymbolWithInt:(jint)side
            withNSString:(NSString *)symbol;

- (void)setValueWithInt:(jint)side
     withJavaLangDouble:(JavaLangDouble *)value;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAlertEditorModel)

inline jdouble DXMARKETAlertEditorModel_get_VALUE_INCREMENT(void);
#define DXMARKETAlertEditorModel_VALUE_INCREMENT 0.01
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertEditorModel, VALUE_INCREMENT, jdouble)

inline jint DXMARKETAlertEditorModel_get_LEFT(void);
#define DXMARKETAlertEditorModel_LEFT 0
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertEditorModel, LEFT, jint)

inline jint DXMARKETAlertEditorModel_get_RIGHT(void);
#define DXMARKETAlertEditorModel_RIGHT 1
J2OBJC_STATIC_FIELD_CONSTANT(DXMARKETAlertEditorModel, RIGHT, jint)

FOUNDATION_EXPORT void DXMARKETAlertEditorModel_init(DXMARKETAlertEditorModel *self);

FOUNDATION_EXPORT DXMARKETAlertEditorModel *new_DXMARKETAlertEditorModel_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAlertEditorModel *create_DXMARKETAlertEditorModel_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertEditorModel)

@compatibility_alias ComDevexpertsDxmarketClientModelAlertAlertEditorModel DXMARKETAlertEditorModel;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertEditorModel")
