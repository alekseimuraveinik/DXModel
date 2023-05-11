
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAbstractAuthorizationDataTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO || defined(INCLUDE_DXAbstractAuthorizationDataTO))
#define DXAbstractAuthorizationDataTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

#define RESTRICT_ComDevexpertsMobileDxplatformApiAuthenticationAuthorizationData 1
#define INCLUDE_DXAuthorizationData 1
#include "DXAuthorizationData.h"

@protocol DXAuthorizationData_Visitor;
@protocol PSTransferObject;

@interface DXAbstractAuthorizationDataTO : PSBaseTransferObject < DXAuthorizationData >
@property (readonly, class, strong) DXAbstractAuthorizationDataTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAbstractAuthorizationDataTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAbstractAuthorizationDataTO *)change;

- (DXAbstractAuthorizationDataTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (id)visitByWithDXAuthorizationData_Visitor:(id<DXAuthorizationData_Visitor>)visitor;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXAbstractAuthorizationDataTO)

inline DXAbstractAuthorizationDataTO *DXAbstractAuthorizationDataTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAbstractAuthorizationDataTO *DXAbstractAuthorizationDataTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAbstractAuthorizationDataTO, EMPTY, DXAbstractAuthorizationDataTO *)

FOUNDATION_EXPORT void DXAbstractAuthorizationDataTO_init(DXAbstractAuthorizationDataTO *self);

FOUNDATION_EXPORT DXAbstractAuthorizationDataTO *new_DXAbstractAuthorizationDataTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAbstractAuthorizationDataTO *create_DXAbstractAuthorizationDataTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAbstractAuthorizationDataTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO DXAbstractAuthorizationDataTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAuthenticationAbstractAuthorizationDataTO")
