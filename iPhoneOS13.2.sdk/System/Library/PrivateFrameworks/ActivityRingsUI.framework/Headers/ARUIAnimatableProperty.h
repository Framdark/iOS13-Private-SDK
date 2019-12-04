//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface ARUIAnimatableProperty : NSObject
{
    id /* block */ _getter;
    id /* block */ _setter;
    NSMutableArray *_animations;
    id _currentValue;
    id _startValue;
    id _endValue;
}

@property(retain, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) id endValue; // @synthesize endValue=_endValue;
@property(retain, nonatomic) id startValue; // @synthesize startValue=_startValue;
- (_Bool)isFinishedAnimating;
- (void)update:(double)arg1;
- (void)removeAllPropertyAnimations;
- (void)addPropertyAnimation:(id)arg1;
- (void)setValueImmediate:(id)arg1;
- (id)initWithGetter:(id /* block */)arg1 setter:(id /* block */)arg2;

@end
