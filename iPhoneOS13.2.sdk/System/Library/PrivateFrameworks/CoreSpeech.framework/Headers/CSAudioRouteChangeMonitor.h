//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSpeech/CSEventMonitor.h>

@interface CSAudioRouteChangeMonitor : CSEventMonitor
{
}

+ (id)sharedInstance;
- (_Bool)jarvisConnected;
- (void)getJarvisConnected:(id /* block */)arg1;
- (_Bool)hearstConnected;
- (void)getHearstConnected:(id /* block */)arg1;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)arg1;

@end
