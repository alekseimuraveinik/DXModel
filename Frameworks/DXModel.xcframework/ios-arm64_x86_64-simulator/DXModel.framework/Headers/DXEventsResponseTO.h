
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXEventsResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO || defined(INCLUDE_DXEventsResponseTO))
#define DXEventsResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXEventsRequestTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXEventsResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXEventsResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXEventsResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXEventsResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXEventsResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getEvents;

- (jlong)getLastEventTime;

- (DXEventsRequestTO *)getRequest;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setEventsWithPSListTO:(PSListTO *)events;

- (void)setLastEventTimeWithLong:(jlong)lastEventTime;

- (void)setRequestWithDXEventsRequestTO:(DXEventsRequestTO *)request;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXEventsResponseTO)

inline DXEventsResponseTO *DXEventsResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXEventsResponseTO *DXEventsResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXEventsResponseTO, EMPTY, DXEventsResponseTO *)

FOUNDATION_EXPORT void DXEventsResponseTO_init(DXEventsResponseTO *self);

FOUNDATION_EXPORT DXEventsResponseTO *new_DXEventsResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXEventsResponseTO *create_DXEventsResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXEventsResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEventsEventsResponseTO DXEventsResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEventsEventsResponseTO")
