//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class _MRGameControllerButtonsProtobuf, _MRGameControllerDigitizerProtobuf, _MRGameControllerMotionProtobuf;

@interface _MRGameControllerMessageProtobuf : PBCodable <NSCopying>
{
    NSUInteger _controllerID;
    _MRGameControllerButtonsProtobuf *_buttons;
    _MRGameControllerDigitizerProtobuf *_digitizer;
    _MRGameControllerMotionProtobuf *_motion;
    CDStruct_669c4a63 _has;
}

@property(retain, nonatomic) _MRGameControllerDigitizerProtobuf *digitizer; // @synthesize digitizer=_digitizer;
@property(retain, nonatomic) _MRGameControllerButtonsProtobuf *buttons; // @synthesize buttons=_buttons;
@property(retain, nonatomic) _MRGameControllerMotionProtobuf *motion; // @synthesize motion=_motion;
@property(nonatomic) NSUInteger controllerID; // @synthesize controllerID=_controllerID;
// - (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasDigitizer;
@property(readonly, nonatomic) BOOL hasButtons;
@property(readonly, nonatomic) BOOL hasMotion;
@property(nonatomic) BOOL hasControllerID;

@end

