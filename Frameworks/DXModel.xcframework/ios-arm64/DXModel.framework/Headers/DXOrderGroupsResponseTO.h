
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO || defined(INCLUDE_DXOrderGroupsResponseTO))
#define DXOrderGroupsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOrderGroupsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderGroupsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderGroupsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderGroupsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderGroupsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getOrderGroups;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrderGroupsWithPSListTO:(PSListTO *)orderGroups;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderGroupsResponseTO)

inline DXOrderGroupsResponseTO *DXOrderGroupsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupsResponseTO *DXOrderGroupsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupsResponseTO, EMPTY, DXOrderGroupsResponseTO *)

FOUNDATION_EXPORT void DXOrderGroupsResponseTO_init(DXOrderGroupsResponseTO *self);

FOUNDATION_EXPORT DXOrderGroupsResponseTO *new_DXOrderGroupsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderGroupsResponseTO *create_DXOrderGroupsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO DXOrderGroupsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsResponseTO")
