
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXSSOTokenTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO || defined(INCLUDE_DXSSOTokenTO))
#define DXSSOTokenTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 1
#define INCLUDE_DXAbstractAuthorizationDataTO 1
#include "DXAbstractAuthorizationDataTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAuthorizationData_Visitor;
@protocol PSTransferObject;

@interface DXSSOTokenTO : DXAbstractAuthorizationDataTO
@property (readonly, class, strong) DXSSOTokenTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXSSOTokenTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)token;

- (DXSSOTokenTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXSSOTokenTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getToken;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTokenWithNSString:(NSString *)token;

- (NSString *)description;

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXSSOTokenTO)

inline DXSSOTokenTO *DXSSOTokenTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXSSOTokenTO *DXSSOTokenTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXSSOTokenTO, EMPTY, DXSSOTokenTO *)

FOUNDATION_EXPORT void DXSSOTokenTO_initWithNSString_(DXSSOTokenTO *self, NSString *token);

FOUNDATION_EXPORT DXSSOTokenTO *new_DXSSOTokenTO_initWithNSString_(NSString *token) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSSOTokenTO *create_DXSSOTokenTO_initWithNSString_(NSString *token);

FOUNDATION_EXPORT void DXSSOTokenTO_init(DXSSOTokenTO *self);

FOUNDATION_EXPORT DXSSOTokenTO *new_DXSSOTokenTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXSSOTokenTO *create_DXSSOTokenTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXSSOTokenTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO DXSSOTokenTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationSSOTokenTO")
