//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RBFill : NSObject
{
    struct RBFillData _data;
}

- (void)set9PartRBImage:(CDStruct_27041886)arg1 transform:(CGAffineTransform)arg2 destinationRect:(CGRect)arg3 capInsets:(CDStruct_d2b197d1)arg4 repeat:(BOOL)arg5 interpolation:(int)arg6 tintColor:(CDStruct_0b1c536a)arg7 flags:(unsigned int)arg8;
- (void)set9PartImage:(CGImage )arg1 transform:(CGAffineTransform)arg2 destinationRect:(CGRect)arg3 capInsets:(CDStruct_d2b197d1)arg4 repeat:(BOOL)arg5 interpolation:(int)arg6 tintColor:(CDStruct_0b1c536a)arg7 flags:(unsigned int)arg8;
- (void)setTiledRBImage:(CDStruct_27041886)arg1 transform:(CGAffineTransform)arg2 sourceRect:(CGRect)arg3 interpolation:(int)arg4 tintColor:(CDStruct_0b1c536a)arg5 flags:(unsigned int)arg6;
- (void)setTiledImage:(CGImage )arg1 transform:(CGAffineTransform)arg2 sourceRect:(CGRect)arg3 interpolation:(int)arg4 tintColor:(CDStruct_0b1c536a)arg5 flags:(unsigned int)arg6;
- (void)setRBImage:(CDStruct_27041886)arg1 transform:(CGAffineTransform)arg2 interpolation:(int)arg3 tintColor:(CDStruct_0b1c536a)arg4 flags:(unsigned int)arg5;
- (void)setImage:(CGImage )arg1 transform:(CGAffineTransform)arg2 interpolation:(int)arg3 tintColor:(CDStruct_0b1c536a)arg4 flags:(unsigned int)arg5;
- (void)setConicGradientCenter:(CGPoint)arg1 angle:(double)arg2 stopCount:(long long)arg3 colors:(const CDStruct_0b1c536a )arg4 locations:(const double )arg5 flags:(unsigned int)arg6;
- (void)setRadialGradientCenter:(CGPoint)arg1 startRadius:(double)arg2 endRadius:(double)arg3 stopCount:(long long)arg4 colors:(const CDStruct_0b1c536a )arg5 locations:(const double )arg6 flags:(unsigned int)arg7;
- (void)setAxialGradientStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 stopCount:(long long)arg3 colors:(const CDStruct_0b1c536a )arg4 locations:(const double )arg5 flags:(unsigned int)arg6;
- (void)setColor:(CDStruct_0b1c536a)arg1;
@property(readonly, nonatomic) struct RBFillData fillData;
- (void)dealloc;
- (id)init;

@end

