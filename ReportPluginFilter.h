//
//  ReportPluginFilter.h
//  OsiriX
//
//  Created by Lance Pysher on 3/12/06.

/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

#import <Cocoa/Cocoa.h>
#import "PluginFilter.h"


@interface ReportPluginFilter : PluginFilter {

}

- (BOOL)createReportForStudy:(id)study;
- (BOOL)deleteReportForStudy:(id)study;
- (NSDate *)reportDateForStudy:(id)study;

@end
