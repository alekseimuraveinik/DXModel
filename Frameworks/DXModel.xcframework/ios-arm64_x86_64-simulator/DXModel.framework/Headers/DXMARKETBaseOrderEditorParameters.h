
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBaseOrderEditorParameters_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters || defined(INCLUDE_DXMARKETBaseOrderEditorParameters))
#define DXMARKETBaseOrderEditorParameters_

#define RESTRICT_ComDevexpertsDxmarketClientModelOrderOrderEditorParameters 1
#define INCLUDE_DXMARKETOrderEditorParameters 1
#include "DXMARKETOrderEditorParameters.h"

@class DXAccountKeyTO;
@class DXMARKETRiskyOrderAdditionalParameters;
@class DXOrderEditorParametersTO;
@class DXOrderExpirationEnum;
@class DXOrderValidationDetailsTO;
@class PSBaseEnum;
@class PSListTO;
@protocol DXMARKETOrderEditorParametersListener;

@interface DXMARKETBaseOrderEditorParameters : NSObject < DXMARKETOrderEditorParameters >

#pragma mark Public

- (instancetype __nonnull)initWithNSString:(NSString *)symbol
 withDXMARKETOrderEditorParametersListener:(id<DXMARKETOrderEditorParametersListener>)listener;

- (void)cacheParameters;

- (DXOrderEditorParametersTO *)constructParameters;

- (DXAccountKeyTO *)getAccountKeyTO;

- (DXMARKETRiskyOrderAdditionalParameters *)getAdditionalParameters;

- (PSListTO *)getAvailableAccounts;

- (PSListTO *)getAvailableExpirations;

- (DXOrderExpirationEnum *)getExpiration;

- (jlong)getExpireAt;

- (NSString *)getSymbol;

- (void)initOrderEditorParamsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details OBJC_METHOD_FAMILY_NONE;

- (void)restoreParameters;

- (jboolean)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)key;

- (jboolean)setExpirationWithDXOrderExpirationEnum:(DXOrderExpirationEnum *)expiration;

- (jboolean)setExpireAtWithLong:(jlong)expireAt;

- (jboolean)validate;

#pragma mark Protected

- (void)fillParametersWithDXOrderEditorParametersTO:(DXOrderEditorParametersTO *)parametersTO;

- (DXOrderEditorParametersTO *)getEmptyParameters;

- (id<DXMARKETOrderEditorParametersListener>)getListener;

- (DXOrderEditorParametersTO *)getParameters;

- (DXOrderEditorParametersTO *)newParametersTO OBJC_METHOD_FAMILY_NONE;

- (PSListTO *)resolveExpirationsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)detailsTO;

- (void)updateAccountsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)details;

- (PSBaseEnum *)updateEnumFieldWithPSListTO:(PSListTO *)availableEnums
                             withPSBaseEnum:(PSBaseEnum *)currentEnum
                             withPSBaseEnum:(PSBaseEnum *)defaultValue;

- (void)updateExpirationsWithDXOrderValidationDetailsTO:(DXOrderValidationDetailsTO *)detailsTO;

// Disallowed inherited constructors, do not use.

- (instancetype __nonnull)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBaseOrderEditorParameters)

FOUNDATION_EXPORT void DXMARKETBaseOrderEditorParameters_initWithNSString_withDXMARKETOrderEditorParametersListener_(DXMARKETBaseOrderEditorParameters *self, NSString *symbol, id<DXMARKETOrderEditorParametersListener> listener);

FOUNDATION_EXPORT DXMARKETBaseOrderEditorParameters *new_DXMARKETBaseOrderEditorParameters_initWithNSString_withDXMARKETOrderEditorParametersListener_(NSString *symbol, id<DXMARKETOrderEditorParametersListener> listener) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETBaseOrderEditorParameters *create_DXMARKETBaseOrderEditorParameters_initWithNSString_withDXMARKETOrderEditorParametersListener_(NSString *symbol, id<DXMARKETOrderEditorParametersListener> listener);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBaseOrderEditorParameters)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters DXMARKETBaseOrderEditorParameters;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseBaseOrderEditorParameters")
