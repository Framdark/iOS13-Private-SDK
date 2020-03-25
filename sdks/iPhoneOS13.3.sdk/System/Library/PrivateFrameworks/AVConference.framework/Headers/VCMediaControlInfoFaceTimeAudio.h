//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/VCMediaControlInfo.h>

__attribute__((visibility("hidden")))
@interface VCMediaControlInfoFaceTimeAudio : VCMediaControlInfo
{
    unsigned int _controlInfoReceivedKbits;
    unsigned int _controlInfoReceivedPackets;
    unsigned int _controlInfoAudioPacketSize;
    unsigned int _controlInfoAudioTimestamp;
    double _controlInfoArrivalTime;
    CDStruct_b4442fdd _controlFeedbackParameter;
    BOOL _videoEnabled;
}

@property BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
- (int)serializeToBuffer:(char )arg1 bufferLength:(NSUInteger)arg2 blobLength:(NSUInteger )arg3;
- (int)getInfo:(void )arg1 bufferLength:(NSUInteger)arg2 infoSize:(NSUInteger )arg3 type:(unsigned int)arg4;
- (int)setInfoUnserialized:(CDStruct_b4442fdd )arg1 type:(unsigned int)arg2;
- (BOOL)hasInfoType:(unsigned int)arg1;
- (int)setInfo:(void )arg1 size:(NSUInteger)arg2 type:(unsigned int)arg3;
- (int)getInfoUnserialized:(CDStruct_b4442fdd )arg1 type:(unsigned int)arg2;
- (int)configureWithBuffer:(const char )arg1 length:(NSUInteger)arg2 optionalControlInfo:(CDStruct_39aa150d )arg3;
- (int)handleOptionalControlInfo:(CDStruct_39aa150d )arg1;
- (id)description;
- (NSUInteger)serializedSize;
@property(readonly) NSUInteger feedbackSize;

@end

