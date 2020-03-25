//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/KNRecordingEvent.h>

__attribute__((visibility("hidden")))
@interface KNRecordingLaserEvent : KNRecordingEvent
{
    CGPoint _unitLocation;
}

@property(readonly, nonatomic) CGPoint unitLocation; // @synthesize unitLocation=_unitLocation;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 unitLocation:(CGPoint)arg2;
- (void)saveToArchive:(struct RecordingEventArchive )arg1 archiver:(id)arg2;
- (id)initWithParentEventTrack:(id)arg1 archive:(const struct RecordingEventArchive )arg2 unarchiver:(id)arg3;

@end

