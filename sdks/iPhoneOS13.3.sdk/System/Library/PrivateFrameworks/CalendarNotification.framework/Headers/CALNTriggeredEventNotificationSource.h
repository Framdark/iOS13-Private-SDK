//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CALNNotificationSource-Protocol.h>
#import <CalendarNotification/CALNTriggeredEventNotificationDataSourceDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol CALNCalendarIconIdentifierProvider, CALNNotificationManager, CALNSourceEventRepresentationProvider, CALNTimeToLeaveRefreshStorage, CALNTravelAdvisoryTimelinessAuthority, CALNTriggeredEventNotificationBodyDescriptionProvider, CALNTriggeredEventNotificationDataSource, CALNTriggeredEventNotificationDataStorage, CALNTriggeredEventNotificationMapItemURLProvider, CALNTriggeredEventNotificationTransitionProvider, CALNTriggeredEventNotificationTriggerHelper, CALNURLHandler, CalDateProvider, OS_dispatch_queue;

@interface CALNTriggeredEventNotificationSource : NSObject <CALNTriggeredEventNotificationDataSourceDelegate, CALNNotificationSource>
{
    id <CALNTriggeredEventNotificationDataSource> _dataSource;
    id <CALNNotificationManager> _notificationManager;
    id <CALNCalendarIconIdentifierProvider> _iconIdentifierProvider;
    id <CALNSourceEventRepresentationProvider> _sourceEventRepresentationProvider;
    id <CALNTriggeredEventNotificationTriggerHelper> _triggerHelper;
    id <CALNTriggeredEventNotificationTransitionProvider> _transitionProvider;
    id <CALNTriggeredEventNotificationBodyDescriptionProvider> _bodyDescriptionProvider;
    id <CALNTravelAdvisoryTimelinessAuthority> _travelAdvisoryTimelinessAuthority;
    id <CalDateProvider> _dateProvider;
    id <CALNTriggeredEventNotificationDataStorage> _notificationDataStorage;
    id <CALNTimeToLeaveRefreshStorage> _timeToLeaveRefreshStorage;
    NSMutableDictionary *_eventURLToObjectIDMap;
    id <CALNURLHandler> _urlHandler;
    id <CALNTriggeredEventNotificationMapItemURLProvider> _mapItemURLProvider;
    NSObject<OS_dispatch_queue> *_workQueue;
}

+ (id)_conferenceURLForNotification:(id)arg1;
+ (id)_mapItemURLForNotification:(id)arg1;
+ (id)conferenceURLUserInfoKey;
+ (id)mapItemURLUserInfoKey;
+ (id)mailOrganizerActionIdentifier;
+ (id)conferenceCallActionIdentifier;
+ (id)directionsActionIdentifier;
+ (id)snoozeActionIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationMapItemURLProvider> mapItemURLProvider; // @synthesize mapItemURLProvider=_mapItemURLProvider;
@property(readonly, nonatomic) id <CALNURLHandler> urlHandler; // @synthesize urlHandler=_urlHandler;
@property(readonly, nonatomic) NSMutableDictionary *eventURLToObjectIDMap; // @synthesize eventURLToObjectIDMap=_eventURLToObjectIDMap;
@property(readonly, nonatomic) id <CALNTimeToLeaveRefreshStorage> timeToLeaveRefreshStorage; // @synthesize timeToLeaveRefreshStorage=_timeToLeaveRefreshStorage;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationDataStorage> notificationDataStorage; // @synthesize notificationDataStorage=_notificationDataStorage;
@property(readonly, nonatomic) id <CalDateProvider> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) id <CALNTravelAdvisoryTimelinessAuthority> travelAdvisoryTimelinessAuthority; // @synthesize travelAdvisoryTimelinessAuthority=_travelAdvisoryTimelinessAuthority;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationBodyDescriptionProvider> bodyDescriptionProvider; // @synthesize bodyDescriptionProvider=_bodyDescriptionProvider;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationTransitionProvider> transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationTriggerHelper> triggerHelper; // @synthesize triggerHelper=_triggerHelper;
@property(readonly, nonatomic) id <CALNSourceEventRepresentationProvider> sourceEventRepresentationProvider; // @synthesize sourceEventRepresentationProvider=_sourceEventRepresentationProvider;
@property(readonly, nonatomic) id <CALNCalendarIconIdentifierProvider> iconIdentifierProvider; // @synthesize iconIdentifierProvider=_iconIdentifierProvider;
@property(readonly, nonatomic) __weak id <CALNNotificationManager> notificationManager; // @synthesize notificationManager=_notificationManager;
@property(readonly, nonatomic) id <CALNTriggeredEventNotificationDataSource> dataSource; // @synthesize dataSource=_dataSource;
// - (void).cxx_destruct;
- (id)_updatedLastFireTimeOfAlertOffsetFromTravelTimeGivenIsOffsetFromTravelTime:(BOOL)arg1;
- (id)_launchURLForResponse:(id)arg1;
- (BOOL)_sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;
- (id)_resolvedSourceClientIdentifierForNewSourceClientIdentifier:(id)arg1 oldSourceClientIdentifier:(id)arg2;
- (id)_eventRepresentationDictionaryWithSourceNotificationInfo:(id)arg1 hypothesisMessage:(id)arg2;
- (void)_setNotificationResponseData:(id)arg1 onNotificationContent:(id)arg2;
- (id)_notificationResponseDataForSourceNotificationInfo:(id)arg1;
- (id)_notificationResponseDataForRecord:(id)arg1;
- (id)_updatedNotificationDataResettingTimeToLeaveDisplayState:(id)arg1;
- (void)_clearTravelAdvisoryFromNotificationMetaDataForSourceClientIdentifier:(id)arg1;
- (void)_resetStoredNotificationDataTimeToLeaveDisplayStateForSourceClientIdentifier:(id)arg1;
- (BOOL)_shouldUpdateStoredNotificationDataGivenTransition:(NSUInteger)arg1;
- (BOOL)_shouldRemoveStoredNotificationDataGivenShouldWithdrawNotification:(BOOL)arg1 hasExistingTravelInformation:(BOOL)arg2 mayCeaseRouteMonitoring:(BOOL)arg3;
- (void)_addNotificationData:(id)arg1 forSourceClientIdentifier:(id)arg2;
- (void)_addNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(NSUInteger)arg4 now:(id)arg5;
- (void)_updateStoredNotificationDataForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 transition:(NSUInteger)arg4 now:(id)arg5;
- (void)_removeStoredNotificationDataForEventWithEventID:(id)arg1;
- (id)_notificationDataForSourceNotificationInfo:(id)arg1 existingNotificationData:(id)arg2 transition:(NSUInteger)arg3 now:(id)arg4;
- (id)_existingNotificationDataMatchingEventForSourceClientIdentifier:(id)arg1;
- (void)_handleMailOrganizerActionWithResponse:(id)arg1;
- (void)_handleConferenceCallActionWithResponse:(id)arg1;
- (void)_handleDirectionsActionWithResponse:(id)arg1;
- (void)_addEventURL:(id)arg1 mappingToEventObjectID:(id)arg2;
- (void)_updateNotification:(id)arg1 shouldClearHypothesis:(BOOL)arg2;
- (void)_notificationAddedWithSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 trigger:(NSUInteger)arg3;
- (void)_addRecord:(id)arg1 sourceNotificationInfo:(id)arg2 existingNotificationData:(id)arg3 trigger:(NSUInteger)arg4 transition:(NSUInteger)arg5 now:(id)arg6;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1 existingRecords:(id)arg2;
- (id)_existingRecordMatchingEventForSourceClientIdentifier:(id)arg1;
- (id)_updatedSourceNotificationInfoForContentCreation:(id)arg1;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 notificationInfo:(id)arg2 existingNotificationData:(id)arg3 hypothesis:(id)arg4 shouldClearHypothesis:(BOOL)arg5 isOffsetFromTravelTimeStart:(BOOL)arg6 isForContentCreation:(BOOL)arg7;
- (id)_sourceNotificationInfoForSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(BOOL)arg2 isForContentCreation:(BOOL)arg3;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1 shouldClearHypothesis:(BOOL)arg2;
- (id)_contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (BOOL)_itemWithEventID:(id)arg1 affectedByChangesToObjects:(id)arg2;
- (BOOL)_notificationWithSourceClientIdentifier:(id)arg1 affectedByChangesToObjects:(id)arg2;
- (BOOL)_shouldRemoveTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
- (void)_refreshTimeToLeaveRefreshTimerWithRefreshDate:(id)arg1 eventID:(id)arg2;
- (void)_refreshTimeToLeaveRefreshTimersWithObjectIDs:(id)arg1;
- (BOOL)_isNotificationMetaDataExpired:(id)arg1 eventID:(id)arg2;
- (BOOL)_shouldRemoveNotificationMetaData:(id)arg1 eventID:(id)arg2;
- (void)_refreshNotificationMetaData:(id)arg1 eventID:(id)arg2;
- (void)_refreshNotificationMetaDataWithObjectIDs:(id)arg1;
- (void)_refreshNotification:(id)arg1;
- (void)_refreshNotificationRecordsWithObjectIDs:(id)arg1;
- (void)_refreshNotifications:(id)arg1;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1 hypothesis:(id)arg2 allowsLocationAlerts:(BOOL)arg3;
- (void)_updateTimeToLeaveRefreshTimerForSourceClientIdentifier:(id)arg1;
- (NSUInteger)_calnTravelAdvisoryTimelinessPeriodFromEKTravelAvisoryTimelinessPeriod:(NSUInteger)arg1;
- (NSUInteger)_travelAdvisoryTimelinessPeriodForHypothesis:(id)arg1;
- (BOOL)_mayCeaseRouteMonitoringForExistingNotificationData:(id)arg1;
- (BOOL)_shouldCeaseRouteMonitoringEventForSourceClientIdentifier:(id)arg1;
- (void)_clearTravelAdvisoryHypotheses;
- (void)_travelAdvisoryAuthorizationChanged:(BOOL)arg1;
- (void)_travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg1;
- (void)_triggeredWithSourceClientIdentifier:(id)arg1 triggerData:(id)arg2;
- (void)dataSource:(id)arg1 travelEngineEventSignificantlyChangedWithSourceClientIdentifier:(id)arg2;
- (void)dataSource:(id)arg1 travelAdvisoryAuthorizationChanged:(BOOL)arg2;
- (void)dataSource:(id)arg1 triggeredWithSourceClientIdentifier:(id)arg2 triggerData:(id)arg3;
@property(readonly, nonatomic) NSArray *categories;
@property(readonly, nonatomic) NSString *sourceIdentifier;
- (void)_didReceiveResponse:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
- (void)refreshNotifications:(id)arg1;
- (id)contentForSourceClientIdentifier:(id)arg1 sourceNotificationInfo:(id)arg2 isProtectedDataAvailable:(BOOL)arg3;
- (id)contentForNotificationWithSourceClientIdentifier:(id)arg1;
- (id)initWithDataSource:(id)arg1 notificationManager:(id)arg2 iconIdentifierProvider:(id)arg3 sourceEventRepresentationProvider:(id)arg4 triggerHelper:(id)arg5 transitionProvider:(id)arg6 bodyDescriptionProvider:(id)arg7 travelAdvisoryTimelinessAuthority:(id)arg8 dateProvider:(id)arg9 notificationDataStorage:(id)arg10 urlHandler:(id)arg11 mapItemURLProvider:(id)arg12 timeToLeaveRefreshStorage:(id)arg13;
- (BOOL)sourceClientIdentifier:(id)arg1 matchesEventForSourceClientIdentifier:(id)arg2;

@end

