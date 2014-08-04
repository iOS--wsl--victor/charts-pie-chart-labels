//
//  ViewController.h
//  PieChart
//
//  Created by Stuart Grey on 18/09/2012.
//  
//  Copyright 2012 Scott Logic
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <UIKit/UIKit.h>
#import <ShinobiCharts/ShinobiChart.h>
#import "MobileOSVersions.h"
#import "Datasource.h"
#import "LineView.h"

@interface ViewController : UIViewController <SChartDelegate> {
    ShinobiChart *pieChart;
    ShinobiChart *donutChart;
    MobileOSVersions *mobileOSVersions;
    Datasource *datasource;
    
    UILabel *selectedOSLabel;
    
    LineView *lineView;
}

@end
