//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PSUICellularUsageContentSpecifiers : NSObject
{
    NSArray *_leadingContentSpecifiers;
    NSMutableArray *_appSpecifiers;
    NSArray *_trailingContentSpecifiers;
}

@property(retain, nonatomic) NSArray *trailingContentSpecifiers; // @synthesize trailingContentSpecifiers=_trailingContentSpecifiers;
@property(retain, nonatomic) NSMutableArray *appSpecifiers; // @synthesize appSpecifiers=_appSpecifiers;
@property(retain, nonatomic) NSArray *leadingContentSpecifiers; // @synthesize leadingContentSpecifiers=_leadingContentSpecifiers;
- (id)specifiers;

@end
