//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, PKStroke, _PKStrokeData;

@interface PKStrokeDelta : NSObject
{
    PKStroke *_deltaStroke;
    _PKStrokeData *_deltaStrokeData;
    NSUUID *_strokeUUID;
}

@property(retain, nonatomic) NSUUID *_strokeUUID; // @synthesize _strokeUUID;
@property(retain, nonatomic) _PKStrokeData *deltaStrokeData; // @synthesize deltaStrokeData=_deltaStrokeData;
@property(retain, nonatomic) PKStroke *deltaStroke; // @synthesize deltaStroke=_deltaStroke;
- (id)description;
- (void)saveToArchive:(struct StrokeDelta *)arg1;
- (id)dataRepresentation;
- (id)initWithArchive:(const struct StrokeDelta *)arg1 error:(id *)arg2;
- (id)initWithData:(id)arg1 error:(id *)arg2;

@end
