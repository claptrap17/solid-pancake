/**

*** header file  argument parser  ***

Copyright 2016, Daniel Obermaier

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

@Author Daniel Obermaier
*/

/*convenient class for advanced command line options*/
#include <boost/program_options.hpp>


namespace f2g{

    class argparser{

    public:
        int init(int argc, char **argv);

        int getPipeline(void);
        int getDepth(void);
        int getSave(void);

    private:
        int pipeline_;
        int depth_;
        int save_;
    };

}
