//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKPhysicsBody;

__attribute__((visibility("hidden")))
@interface SKUICircleRepellor : NSObject
{
    double _bufferSize;
    CGPoint _center;
    PKPhysicsBody *_physicsBody;
    double _radius;
}

@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(retain, nonatomic) PKPhysicsBody *physicsBody; // @synthesize physicsBody=_physicsBody;
@property(nonatomic) CGPoint center; // @synthesize center=_center;
@property(nonatomic) double bufferSize; // @synthesize bufferSize=_bufferSize;
// - (void).cxx_destruct;
- (id)description;

@end

