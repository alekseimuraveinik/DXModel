
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXInstrumentTreeNodeTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO || defined(INCLUDE_DXInstrumentTreeNodeTO))
#define DXInstrumentTreeNodeTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXInstrumentTreeNodeTO : PSBaseTransferObject
@property (readonly, class, strong) DXInstrumentTreeNodeTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXInstrumentTreeNodeTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXInstrumentTreeNodeTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXInstrumentTreeNodeTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getInstruments;

- (NSString *)getName;

- (NSString *)getPath;

- (NSUInteger)hash;

- (jboolean)isLeaf;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setInstrumentsWithPSListTO:(PSListTO *)instruments;

- (void)setLeafWithBoolean:(jboolean)isLeaf;

- (void)setNameWithNSString:(NSString *)name;

- (void)setPathWithNSString:(NSString *)path;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXInstrumentTreeNodeTO)

inline DXInstrumentTreeNodeTO *DXInstrumentTreeNodeTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXInstrumentTreeNodeTO *DXInstrumentTreeNodeTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXInstrumentTreeNodeTO, EMPTY, DXInstrumentTreeNodeTO *)

FOUNDATION_EXPORT void DXInstrumentTreeNodeTO_init(DXInstrumentTreeNodeTO *self);

FOUNDATION_EXPORT DXInstrumentTreeNodeTO *new_DXInstrumentTreeNodeTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXInstrumentTreeNodeTO *create_DXInstrumentTreeNodeTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXInstrumentTreeNodeTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO DXInstrumentTreeNodeTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiInstrumentInstrumentTreeNodeTO")
