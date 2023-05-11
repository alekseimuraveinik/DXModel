
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTreeResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO || defined(INCLUDE_DXInstrumentTreeResponseTO))
#define DXInstrumentTreeResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXInstrumentTreeNodeTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentTreeResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentTreeResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentTreeResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentTreeResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTreeResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXInstrumentTreeNodeTO *)getNode;

- (PSListTO *)getSubNodes;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setNodeWithDXInstrumentTreeNodeTO:(DXInstrumentTreeNodeTO *)node;

- (void)setSubNodesWithPSListTO:(PSListTO *)subNodes;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentTreeResponseTO)

inline DXInstrumentTreeResponseTO *DXInstrumentTreeResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTreeResponseTO *DXInstrumentTreeResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTreeResponseTO, EMPTY, DXInstrumentTreeResponseTO *)

FOUNDATION_EXPORT void DXInstrumentTreeResponseTO_init(DXInstrumentTreeResponseTO *self);

FOUNDATION_EXPORT DXInstrumentTreeResponseTO *new_DXInstrumentTreeResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTreeResponseTO *create_DXInstrumentTreeResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTreeResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO DXInstrumentTreeResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeResponseTO")
