
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCoreSSOTokenTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO || defined(INCLUDE_DXCoreSSOTokenTO))
#define DXCoreSSOTokenTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 1
#define INCLUDE_DXAbstractAuthorizationDataTO 1
#include "DXAbstractAuthorizationDataTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAuthorizationData_Visitor;
@protocol PSTransferObject;

@interface DXCoreSSOTokenTO : DXAbstractAuthorizationDataTO
@property (readonly, class, strong) DXCoreSSOTokenTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCoreSSOTokenTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)token;

- (instancetype __nonnull)initWithNSString:(NSString *)token
                                  withLong:(jlong)validUntil;

- (DXCoreSSOTokenTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCoreSSOTokenTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getToken;

- (jlong)getValidUntil;

- (NSUInteger)hash;

- (jboolean)isValid;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setTokenWithNSString:(NSString *)token;

- (void)setValidUntilWithLong:(jlong)validUntil;

- (NSString *)description;

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCoreSSOTokenTO)

inline DXCoreSSOTokenTO *DXCoreSSOTokenTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCoreSSOTokenTO *DXCoreSSOTokenTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCoreSSOTokenTO, EMPTY, DXCoreSSOTokenTO *)

FOUNDATION_EXPORT void DXCoreSSOTokenTO_initWithNSString_(DXCoreSSOTokenTO *self, NSString *token);

FOUNDATION_EXPORT DXCoreSSOTokenTO *new_DXCoreSSOTokenTO_initWithNSString_(NSString *token) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCoreSSOTokenTO *create_DXCoreSSOTokenTO_initWithNSString_(NSString *token);

FOUNDATION_EXPORT void DXCoreSSOTokenTO_initWithNSString_withLong_(DXCoreSSOTokenTO *self, NSString *token, jlong validUntil);

FOUNDATION_EXPORT DXCoreSSOTokenTO *new_DXCoreSSOTokenTO_initWithNSString_withLong_(NSString *token, jlong validUntil) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCoreSSOTokenTO *create_DXCoreSSOTokenTO_initWithNSString_withLong_(NSString *token, jlong validUntil);

FOUNDATION_EXPORT void DXCoreSSOTokenTO_init(DXCoreSSOTokenTO *self);

FOUNDATION_EXPORT DXCoreSSOTokenTO *new_DXCoreSSOTokenTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCoreSSOTokenTO *create_DXCoreSSOTokenTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCoreSSOTokenTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO DXCoreSSOTokenTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSSOTokenTO")
