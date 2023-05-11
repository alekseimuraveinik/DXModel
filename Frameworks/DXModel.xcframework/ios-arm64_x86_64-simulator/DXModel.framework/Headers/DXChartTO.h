
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChartTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartTO || defined(INCLUDE_DXChartTO))
#define DXChartTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXCandleTO;
@class DXInstrumentTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@class PSLongListTO;
@protocol PSTransferObject;

@interface DXChartTO : PSBaseTransferObject
@property (readonly, class, strong) DXChartTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXChartTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (void)addStudyValuesWithPSListTO:(PSListTO *)values;

- (DXChartTO *)change;

- (PSLongListTO *)changeClosePrices;

- (PSLongListTO *)changeHighPrices;

- (PSLongListTO *)changeLowPrices;

- (PSLongListTO *)changeOpenPrices;

- (PSListTO *)changeStudiesValues;

- (PSListTO *)changeStudyValuesAtStudyWithInt:(jint)index;

- (PSLongListTO *)changeTimestamps;

- (PSLongListTO *)changeVolumes;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXChartTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXCandleTO *)getCandle;

- (PSLongListTO *)getClose;

- (jint)getDataLength;

- (PSLongListTO *)getHigh;

- (DXInstrumentTO *)getInstrument;

- (PSLongListTO *)getLow;

- (PSListTO *)getMultiStudyValues;

- (PSLongListTO *)getOpen;

- (PSListTO *)getStudies;

- (PSLongListTO *)getTimestamp;

- (PSLongListTO *)getVolume;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCandleWithDXCandleTO:(DXCandleTO *)candle;

- (void)setCloseWithPSLongListTO:(PSLongListTO *)close;

- (void)setHighWithPSLongListTO:(PSLongListTO *)high;

- (void)setInstrumentWithDXInstrumentTO:(DXInstrumentTO *)instrument;

- (void)setLowWithPSLongListTO:(PSLongListTO *)low;

- (void)setMultiStudyValuesWithPSListTO:(PSListTO *)multiStudyValues;

- (void)setOpenWithPSLongListTO:(PSLongListTO *)open;

- (void)setStudiesWithPSListTO:(PSListTO *)studies;

- (void)setTimestampWithPSLongListTO:(PSLongListTO *)timestamp;

- (void)setVolumeWithPSLongListTO:(PSLongListTO *)volume;

- (NSString *)description;

- (jboolean)validate;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXChartTO)

inline DXChartTO *DXChartTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartTO *DXChartTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartTO, EMPTY, DXChartTO *)

FOUNDATION_EXPORT void DXChartTO_init(DXChartTO *self);

FOUNDATION_EXPORT DXChartTO *new_DXChartTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartTO *create_DXChartTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChartTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiChartChartTO DXChartTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartTO")
