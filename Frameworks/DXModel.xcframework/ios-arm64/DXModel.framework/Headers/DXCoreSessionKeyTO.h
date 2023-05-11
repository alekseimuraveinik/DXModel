
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCoreSessionKeyTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO || defined(INCLUDE_DXCoreSessionKeyTO))
#define DXCoreSessionKeyTO_

#define RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 1
#define INCLUDE_DXAbstractAuthorizationDataTO 1
#include "DXAbstractAuthorizationDataTO.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAuthorizationData_Visitor;
@protocol PSTransferObject;

@interface DXCoreSessionKeyTO : DXAbstractAuthorizationDataTO
@property (readonly, class, strong) DXCoreSessionKeyTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCoreSessionKeyTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithInt:(jint)id_
                         withNSString:(NSString *)code;

- (DXCoreSessionKeyTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCoreSessionKeyTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getCode;

- (jint)getId;

- (NSUInteger)hash;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (NSString *)description;

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCoreSessionKeyTO)

inline DXCoreSessionKeyTO *DXCoreSessionKeyTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCoreSessionKeyTO *DXCoreSessionKeyTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCoreSessionKeyTO, EMPTY, DXCoreSessionKeyTO *)

FOUNDATION_EXPORT void DXCoreSessionKeyTO_initWithInt_withNSString_(DXCoreSessionKeyTO *self, jint id_, NSString *code);

FOUNDATION_EXPORT DXCoreSessionKeyTO *new_DXCoreSessionKeyTO_initWithInt_withNSString_(jint id_, NSString *code) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCoreSessionKeyTO *create_DXCoreSessionKeyTO_initWithInt_withNSString_(jint id_, NSString *code);

FOUNDATION_EXPORT void DXCoreSessionKeyTO_init(DXCoreSessionKeyTO *self);

FOUNDATION_EXPORT DXCoreSessionKeyTO *new_DXCoreSessionKeyTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCoreSessionKeyTO *create_DXCoreSessionKeyTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCoreSessionKeyTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO DXCoreSessionKeyTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationCoreSessionKeyTO")
