//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject
{
    SGMFoundInAppsICS *_foundInAppsICS;
}

+ (void)recordWithTimezoneValue:(struct SGMFoundInAppsICSTZValue_)arg1 datetimeType:(struct SGMFoundInAppsDatetimeType_)arg2;
+ (id)instance;
@property(retain, nonatomic) SGMFoundInAppsICS *foundInAppsICS; // @synthesize foundInAppsICS=_foundInAppsICS;
- (id)init;

@end
