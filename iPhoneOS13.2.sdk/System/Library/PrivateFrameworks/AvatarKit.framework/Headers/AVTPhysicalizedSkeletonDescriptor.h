//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNode;

@interface AVTPhysicalizedSkeletonDescriptor : NSObject
{
    float _simulationFactor;
    SCNNode *_referenceNode;
    SCNNode *_drivingNode;
    SCNNode *_rootJoint;
    // Error parsing type: , name: _upDownRotation
    // Error parsing type: , name: _leftRightRotation
    // Error parsing type: , name: _forwardBackRotation
}

// Error parsing type for property forwardBackRotation:
// Property attributes: T,N,V_forwardBackRotation

// Error parsing type for property leftRightRotation:
// Property attributes: T,N,V_leftRightRotation

// Error parsing type for property upDownRotation:
// Property attributes: T,N,V_upDownRotation

@property(retain, nonatomic) SCNNode *rootJoint; // @synthesize rootJoint=_rootJoint;
@property(retain, nonatomic) SCNNode *drivingNode; // @synthesize drivingNode=_drivingNode;
@property(retain, nonatomic) SCNNode *referenceNode; // @synthesize referenceNode=_referenceNode;
@property(nonatomic) float simulationFactor; // @synthesize simulationFactor=_simulationFactor;

@end
