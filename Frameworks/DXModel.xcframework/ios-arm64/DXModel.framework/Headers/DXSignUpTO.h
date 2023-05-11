
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSignupSignUpTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSignUpTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTO || defined(INCLUDE_DXSignUpTO))
#define DXSignUpTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXKeyValuesTO;
@class DXSignUpModeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXSignUpTOVisitor;
@protocol PSTransferObject;

@interface DXSignUpTO : PSBaseTransferObject
@property (readonly, class, strong) DXSignUpTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSignUpTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (void)addParamWithNSString:(NSString *)key
                withNSString:(NSString *)value;

- (DXSignUpTO *)change;

- (DXSignUpTO *)deepCopy;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSignUpTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getEmail;

- (DXSignUpModeEnum *)getMode;

- (NSString *)getParamWithNSString:(NSString *)key;

- (DXKeyValuesTO *)getParams;

- (NSString *)getPassword;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEmailWithNSString:(NSString *)email;

- (void)setModeWithDXSignUpModeEnum:(DXSignUpModeEnum *)mode;

- (void)setParamsWithDXKeyValuesTO:(DXKeyValuesTO *)params;

- (void)setPasswordWithNSString:(NSString *)password;

- (NSString *)description;

- (void)visitWithWithDXSignUpTOVisitor:(id<DXSignUpTOVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSignUpTO)

inline DXSignUpTO *DXSignUpTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSignUpTO *DXSignUpTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSignUpTO, EMPTY, DXSignUpTO *)

FOUNDATION_EXPORT void DXSignUpTO_init(DXSignUpTO *self);

FOUNDATION_EXPORT DXSignUpTO *new_DXSignUpTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSignUpTO *create_DXSignUpTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSignUpTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiSignupSignUpTO DXSignUpTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSignupSignUpTO")
