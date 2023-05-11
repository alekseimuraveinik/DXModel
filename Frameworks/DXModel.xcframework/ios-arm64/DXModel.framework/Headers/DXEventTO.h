
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTO || defined(INCLUDE_DXEventTO))
#define DXEventTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXEventSeverityEnum;
@class DXEventTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXEventTO : PSBaseTransferObject
@property (readonly, class, strong) DXEventTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEventTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXEventTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXEventTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXEventTypeEnum *)getEventType;

- (DXEventSeverityEnum *)getSeverity;

- (jlong)getTime;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEventTypeWithDXEventTypeEnum:(DXEventTypeEnum *)eventType;

- (void)setSeverityWithDXEventSeverityEnum:(DXEventSeverityEnum *)severity;

- (void)setTimeWithLong:(jlong)time;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXEventTO)

inline DXEventTO *DXEventTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventTO *DXEventTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventTO, EMPTY, DXEventTO *)

FOUNDATION_EXPORT void DXEventTO_init(DXEventTO *self);

FOUNDATION_EXPORT DXEventTO *new_DXEventTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventTO *create_DXEventTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventTO DXEventTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventTO")
