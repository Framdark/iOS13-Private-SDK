//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureStillImageSinkConfiguration : FigCaptureSinkConfiguration
{
    BOOL _quadraHighResCaptureEnabled;
}

@property(nonatomic) BOOL quadraHighResCaptureEnabled; // @synthesize quadraHighResCaptureEnabled=_quadraHighResCaptureEnabled;
- (int)sinkType;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end
