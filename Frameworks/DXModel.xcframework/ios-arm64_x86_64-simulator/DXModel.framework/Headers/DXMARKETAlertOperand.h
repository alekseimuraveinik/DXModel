
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertOperand")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertOperand
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertOperand 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertOperand 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelAlertAlertOperand

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETAlertOperand_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertOperand || defined(INCLUDE_DXMARKETAlertOperand))
#define DXMARKETAlertOperand_

@class DXMarketFieldEnum;
@class DXOperandTypeEnum;
@class JavaLangDouble;

@interface DXMARKETAlertOperand : NSObject

#pragma mark Public

- (instancetype __nonnull)initWithJavaLangDouble:(JavaLangDouble *)value;

- (instancetype __nonnull)initWithDXMarketFieldEnum:(DXMarketFieldEnum *)marketField
                                       withNSString:(NSString *)symbol;

- (DXMarketFieldEnum *)getMarketField;

- (DXOperandTypeEnum *)getOperandType;

- (NSString *)getSymbol;

- (JavaLangDouble *)getValue;

- (void)setMarketFieldWithDXMarketFieldEnum:(DXMarketFieldEnum *)marketField;

- (void)setOperandTypeWithDXOperandTypeEnum:(DXOperandTypeEnum *)operandType;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (void)setValueWithJavaLangDouble:(JavaLangDouble *)value;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETAlertOperand)

FOUNDATION_EXPORT void DXMARKETAlertOperand_initWithDXMarketFieldEnum_withNSString_(DXMARKETAlertOperand *self, DXMarketFieldEnum *marketField, NSString *symbol);

FOUNDATION_EXPORT DXMARKETAlertOperand *new_DXMARKETAlertOperand_initWithDXMarketFieldEnum_withNSString_(DXMarketFieldEnum *marketField, NSString *symbol) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAlertOperand *create_DXMARKETAlertOperand_initWithDXMarketFieldEnum_withNSString_(DXMarketFieldEnum *marketField, NSString *symbol);

FOUNDATION_EXPORT void DXMARKETAlertOperand_initWithJavaLangDouble_(DXMARKETAlertOperand *self, JavaLangDouble *value);

FOUNDATION_EXPORT DXMARKETAlertOperand *new_DXMARKETAlertOperand_initWithJavaLangDouble_(JavaLangDouble *value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETAlertOperand *create_DXMARKETAlertOperand_initWithJavaLangDouble_(JavaLangDouble *value);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETAlertOperand)

@compatibility_alias ComDevexpertsDxmarketClientModelAlertAlertOperand DXMARKETAlertOperand;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelAlertAlertOperand")
