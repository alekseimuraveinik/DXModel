
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartCandleTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiChartCandleTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartCandleTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartCandleTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiChartCandleTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXCandleTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartCandleTO || defined(INCLUDE_DXCandleTO))
#define DXCandleTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXCandleTO : PSBaseTransferObject
@property (readonly, class, strong) DXCandleTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXCandleTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXCandleTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXCandleTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jlong)getClose;

- (jlong)getHigh;

- (jlong)getLow;

- (PSListTO *)getMultiStudyValues;

- (jlong)getOpen;

- (jlong)getTimestamp;

- (jlong)getVolume;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCloseWithLong:(jlong)close;

- (void)setHighWithLong:(jlong)high;

- (void)setLowWithLong:(jlong)low;

- (void)setMultiStudyValuesWithPSListTO:(PSListTO *)multiStudyValues;

- (void)setOpenWithLong:(jlong)open;

- (void)setTimestampWithLong:(jlong)timestamp;

- (void)setVolumeWithLong:(jlong)volume;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXCandleTO)

inline DXCandleTO *DXCandleTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXCandleTO *DXCandleTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXCandleTO, EMPTY, DXCandleTO *)

FOUNDATION_EXPORT void DXCandleTO_init(DXCandleTO *self);

FOUNDATION_EXPORT DXCandleTO *new_DXCandleTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXCandleTO *create_DXCandleTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXCandleTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiChartCandleTO DXCandleTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartCandleTO")
