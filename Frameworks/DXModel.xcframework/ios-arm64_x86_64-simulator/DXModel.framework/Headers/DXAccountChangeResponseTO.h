
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAccountChangeResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO || defined(INCLUDE_DXAccountChangeResponseTO))
#define DXAccountChangeResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXAccountChangeResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAccountChangeResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAccountChangeResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAccountChangeResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAccountChangeResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getErrorTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorTOWithPSErrorTO:(PSErrorTO *)errorTO;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAccountChangeResponseTO)

inline DXAccountChangeResponseTO *DXAccountChangeResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAccountChangeResponseTO *DXAccountChangeResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAccountChangeResponseTO, EMPTY, DXAccountChangeResponseTO *)

FOUNDATION_EXPORT void DXAccountChangeResponseTO_init(DXAccountChangeResponseTO *self);

FOUNDATION_EXPORT DXAccountChangeResponseTO *new_DXAccountChangeResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAccountChangeResponseTO *create_DXAccountChangeResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAccountChangeResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO DXAccountChangeResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAccountAccountChangeResponseTO")
