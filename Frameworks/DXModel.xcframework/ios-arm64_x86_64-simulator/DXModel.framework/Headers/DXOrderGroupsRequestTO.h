
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderGroupsRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO || defined(INCLUDE_DXOrderGroupsRequestTO))
#define DXOrderGroupsRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@protocol PSTransferObject;

@interface DXOrderGroupsRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderGroupsRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderGroupsRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderGroupsRequestTO *)change;

- (DXOrderGroupsRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

#pragma mark Protected

- (jboolean)canEqualWithId:(id)other;

@end

J2OBJC_STATIC_INIT(DXOrderGroupsRequestTO)

inline DXOrderGroupsRequestTO *DXOrderGroupsRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderGroupsRequestTO *DXOrderGroupsRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderGroupsRequestTO, EMPTY, DXOrderGroupsRequestTO *)

FOUNDATION_EXPORT void DXOrderGroupsRequestTO_init(DXOrderGroupsRequestTO *self);

FOUNDATION_EXPORT DXOrderGroupsRequestTO *new_DXOrderGroupsRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderGroupsRequestTO *create_DXOrderGroupsRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderGroupsRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO DXOrderGroupsRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrdergroupsOrderGroupsRequestTO")
