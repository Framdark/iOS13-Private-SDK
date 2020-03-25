//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface FCRFace : NSObject
{
    CDStruct_ac082cae face;
    CDStruct_ac082cae leftEye;
    CDStruct_ac082cae rightEye;
    CDStruct_ac082cae mouth;
    double faceSize;
    double faceAngle;
    long long trackID;
    NSUInteger trackDuration;
    NSData *faceprint;
    int faceType;
    NSDictionary *faceLandmarkPoints;
    NSDictionary *expressionFeatures;
    NSDictionary *additionalInfo;
}

@property(retain) NSDictionary *additionalInfo; // @synthesize additionalInfo;
@property long long trackID; // @synthesize trackID;
@property NSUInteger trackDuration; // @synthesize trackDuration;
@property CDStruct_ac082cae rightEye; // @synthesize rightEye;
@property CDStruct_ac082cae mouth; // @synthesize mouth;
@property CDStruct_ac082cae leftEye; // @synthesize leftEye;
@property(retain) NSData *faceprint; // @synthesize faceprint;
@property int faceType; // @synthesize faceType;
@property double faceSize; // @synthesize faceSize;
@property(retain) NSDictionary *faceLandmarkPoints; // @synthesize faceLandmarkPoints;
@property CDStruct_ac082cae face; // @synthesize face;
@property double faceAngle; // @synthesize faceAngle;
@property(retain) NSDictionary *expressionFeatures; // @synthesize expressionFeatures;
@property(readonly) BOOL hasMouthBounds;
@property(readonly) BOOL hasRightEyeBounds;
@property(readonly) BOOL hasLeftEyeBounds;
- (void)dealloc;

@end

