
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCredentialsTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO || defined(INCLUDE_DXCredentialsTO))
#define DXCredentialsTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 1
#define INCLUDE_DXAbstractAuthorizationDataTO 1
#include "DXAbstractAuthorizationDataTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAuthorizationData_Visitor;
@protocol PSTransferObject;

@interface DXCredentialsTO : DXAbstractAuthorizationDataTO
@property (readonly, class, strong) DXCredentialsTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCredentialsTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)login
                              withNSString:(NSString *)password;

- (DXCredentialsTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCredentialsTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getLogin;

- (NSString *)getPassword;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLoginWithNSString:(NSString *)login;

- (void)setPasswordWithNSString:(NSString *)password;

- (NSString *)description;

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCredentialsTO)

inline DXCredentialsTO *DXCredentialsTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCredentialsTO *DXCredentialsTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCredentialsTO, EMPTY, DXCredentialsTO *)

FOUNDATION_EXPORT void DXCredentialsTO_initWithNSString_withNSString_(DXCredentialsTO *self, NSString *login, NSString *password);

FOUNDATION_EXPORT DXCredentialsTO *new_DXCredentialsTO_initWithNSString_withNSString_(NSString *login, NSString *password) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCredentialsTO *create_DXCredentialsTO_initWithNSString_withNSString_(NSString *login, NSString *password);

FOUNDATION_EXPORT void DXCredentialsTO_init(DXCredentialsTO *self);

FOUNDATION_EXPORT DXCredentialsTO *new_DXCredentialsTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCredentialsTO *create_DXCredentialsTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCredentialsTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO DXCredentialsTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCredentialsTO")
