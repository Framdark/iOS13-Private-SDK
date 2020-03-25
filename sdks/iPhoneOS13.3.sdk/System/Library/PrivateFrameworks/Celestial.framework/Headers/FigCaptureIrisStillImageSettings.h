//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureStillImageSettings.h>

@class FigCaptureMovieFileRecordingSettings, NSArray, NSURL;

@interface FigCaptureIrisStillImageSettings : FigCaptureStillImageSettings
{
    int _movieMode;
    FigCaptureMovieFileRecordingSettings *_movieRecordingSettings;
    NSURL *_movieURLForOriginalImage;
    NSArray *_movieLevelMetadataForOriginalImage;
    NSURL *_spatialOverCaptureMovieURLForOriginalImage;
    NSArray *_spatialOverCaptureMovieLevelMetadataForOriginalImage;
    CGSize _nonDestructiveCropSize;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) CGSize nonDestructiveCropSize; // @synthesize nonDestructiveCropSize=_nonDestructiveCropSize;
@property(copy, nonatomic) NSArray *spatialOverCaptureMovieLevelMetadataForOriginalImage; // @synthesize spatialOverCaptureMovieLevelMetadataForOriginalImage=_spatialOverCaptureMovieLevelMetadataForOriginalImage;
@property(copy, nonatomic) NSURL *spatialOverCaptureMovieURLForOriginalImage; // @synthesize spatialOverCaptureMovieURLForOriginalImage=_spatialOverCaptureMovieURLForOriginalImage;
@property(copy, nonatomic) NSArray *movieLevelMetadataForOriginalImage; // @synthesize movieLevelMetadataForOriginalImage=_movieLevelMetadataForOriginalImage;
@property(copy, nonatomic) NSURL *movieURLForOriginalImage; // @synthesize movieURLForOriginalImage=_movieURLForOriginalImage;
@property(copy, nonatomic) FigCaptureMovieFileRecordingSettings *movieRecordingSettings; // @synthesize movieRecordingSettings=_movieRecordingSettings;
@property(nonatomic) int movieMode; // @synthesize movieMode=_movieMode;
- (id)description;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
