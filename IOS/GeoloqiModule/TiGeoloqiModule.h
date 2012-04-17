/**
 * Your Copyright Here
 *
 * Appcelerator Titanium is Copyright (c) 2009-2010 by Appcelerator, Inc.
 * and licensed under the Apache Public License (version 2)
 */
#import "TiModule.h"
#import "TiGeoloqiLQTrackerProxy.h"

@interface TiGeoloqiModule : TiModule 
{
    TiGeoloqiLQTrackerProxy *LQTrackerProxyObj;
    BOOL bLogEnabled;
    
  
}

-(BOOL) isDebugOn;
+(TiGeoloqiModule *) getCurrentObject;

@end