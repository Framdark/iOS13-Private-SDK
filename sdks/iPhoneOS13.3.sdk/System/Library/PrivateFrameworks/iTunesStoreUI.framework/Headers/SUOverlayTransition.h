//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SUDOMElement;

@interface SUOverlayTransition : NSObject <NSSecureCoding, NSCopying>
{
    double _duration;
    SUDOMElement *_sourceElement;
    long long _type;
}

+ (long long)transitionTypeFromString:(id)arg1;
+ (BOOL)supportsSecureCoding;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) SUDOMElement *sourceElement; // @synthesize sourceElement=_sourceElement;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

